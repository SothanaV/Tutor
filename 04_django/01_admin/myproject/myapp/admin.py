from django.contrib import admin

# Register your models here.
from .models import Customer, Car, Rent

class CarAdmin(admin.ModelAdmin):
    fields = ('brand', 'model', 'price')
    list_display = ('id','brand', 'model', 'price')
    list_filter = ('model',)
    list_editable = ('brand', 'model', 'price')
admin.site.register(Car, CarAdmin)

class CustomerAdmin(admin.ModelAdmin):
    fields = ('first_name', 'last_name', 'telephone','email')
    list_display = ('id','first_name', 'last_name', 'telephone','email')
    # list_display=[f.name for f in Customer._meta.fields]
    # list_editable = ('brand', 'model', 'price')
admin.site.register(Customer, CustomerAdmin)

class RentAdmin(admin.ModelAdmin):
    list_display=[f.name for f in Rent._meta.fields]
admin.site.register(Rent, RentAdmin)