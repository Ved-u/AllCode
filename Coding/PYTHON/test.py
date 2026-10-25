import requests
import time
from urllib.parse import quote

def bing_search(query, count=100, delay=2):
    headers = {
        "User-Agent": "Mozilla/5.0"
    }

    for i in range(count):
        encoded_query = quote(query)
        url = f"https://www.bing.com/search?q={encoded_query}"
        try:
            response = requests.get(url, headers=headers)
            print(f"[{i+1}] Searched: '{query}' | Status: {response.status_code}")
        except Exception as e:
            print(f"[{i+1}] Error: {e}")
        
        time.sleep(delay)

if __name__ == "__main__":
    bing_search("OpenAI GPT-4", count=100, delay=2)
