# Generated by Django 2.2.5 on 2019-10-10 09:01

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('appname', '0001_initial'),
    ]

    operations = [
        migrations.RenameField(
            model_name='car',
            old_name='prize',
            new_name='price',
        ),
    ]
