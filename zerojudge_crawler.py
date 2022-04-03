import urllib.request as request
import ssl
import bs4


class zj_crawler():
    def __init__(self, id):
        self.zj_url = f"https://zerojudge.tw/ShowProblem?problemid={id}"
        self.context = ssl._create_unverified_context()

        self.request_data = request.Request(self.zj_url,
            headers={"User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) \
                      AppleWebKit/537.36 (KHTML, like Gecko) Chrome/99.0.4844.\
                      74Safari/537.36 Edg/99.0.1150.55"})

        with request.urlopen(self.request_data, context=self.context) as resp:
            self.data = resp.read().decode("utf-8")

        self.soup = bs4.BeautifulSoup(self.data, "html.parser")

        # 標題
        problem_title = self.soup.find(id="problem_title")
        problem_id = self.soup.find("div", class_="h1")
        title = ""
        for t in range(5):
            title += problem_id.text[t]
        title += problem_title.string
        self.title = title

        # 敘述
        problem_content = self.soup.find(id="problem_content").text
        self.problem_content = problem_content

        # 輸入說明
        input_illustrate = self.soup.find(id="problem_theinput").text
        self.input_illustrate = input_illustrate

        # 輸出說明
        output_illustrate = self.soup.find(id="problem_theoutput").text
        self.output_illustrate = output_illustrate

        # 範例輸入
        items = self.soup.find_all("pre")
        counter = 0
        ex_input_list = []
        for i in range(0, len(items), 2):
            counter += 1
            text = items[i].text
            if "\n" in text:
                ex_input_list.append(text)
            else:
                ex_input_list.append(text+"\n")
        self.ex_input_list = ex_input_list

        # 範例輸出
        items = self.soup.find_all("pre")
        counter = 0
        ex_output_list = []
        for i in range(1, len(items), 2):
            counter += 1
            text = items[i].text
            if "\n" in text:
                ex_output_list.append(text)
            else:
                ex_output_list.append(text+"\n")
        self.ex_output_list = ex_output_list

        # 範例測資長度
        items = self.soup.find_all("pre")
        ex_test_case_quantity = int(len(items)/2)
        self.ex_test_case_quantity = ex_test_case_quantity

        # 題目標籤
        tags = self.soup.find("span", class_="tag")
        tags = str(tags)
        tags_soup = bs4.BeautifulSoup(tags, "html.parser")
        tags = tags_soup.find_all("a")
        tags_list = []
        for t in range(len(tags)):
            tags_list.append(tags[t].text)
        self.tags_list = tags_list

        # 範例測資
        test_case_list = []
        for t in range(self.ex_test_case_quantity):
            test_case_list.append([self.ex_input_list[t], self.ex_output_list[t]])
        self.test_case_list = test_case_list
