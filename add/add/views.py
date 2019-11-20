from django.shortcuts import render
 
def home(request):
    print (request)
    data={"name":"Bikesh SItikhu"}
    return render(request, "index.html", data)