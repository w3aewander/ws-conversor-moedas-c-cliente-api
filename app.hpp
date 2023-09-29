#include <iostream>
#include <curl/curl.h>
#include <string>

using namespace std;

static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}


string valorDolar()
{

  
  CURL * curl;
  CURLcode res;
  std::string readBuffer;

  curl = curl_easy_init();


  if(curl) {

    curl_easy_setopt(curl, CURLOPT_URL, "https://www.wmomodavix.com.br/api/public/?dolar");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
    res = curl_easy_perform(curl);

    curl_easy_cleanup(curl);

  }

  return readBuffer;

 }

string valorEuro()
{

  
  CURL * curl;
  CURLcode res;
  std::string readBuffer;

  curl = curl_easy_init();


  if(curl) {

    curl_easy_setopt(curl, CURLOPT_URL, "https://www.wmomodavix.com.br/api/public/?euro");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
    res = curl_easy_perform(curl);

    curl_easy_cleanup(curl);

  }

  return readBuffer;

 }


string valorBitcoin()
{

  
  CURL * curl;
  CURLcode res;
  std::string readBuffer;

  curl = curl_easy_init();


  if(curl) {

    curl_easy_setopt(curl, CURLOPT_URL, "https://www.wmomodavix.com.br/api/public/?bitcoin");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
    res = curl_easy_perform(curl);

    curl_easy_cleanup(curl);

  }

  return readBuffer;

 }
