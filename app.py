# -*- coding: utf-8 -*-
import streamlit as st
import plotly.express as px
import pandas as pd

st.title("📈 Plotly 在 Streamlit 中的演示")

df = pd.DataFrame({
    "日期": pd.date_range("2024-01-01", periods=7),
    "气温": [22, 21, 23, 20, 19, 21, 22]
})

fig = px.line(df, x="日期", y="气温", title="一周气温变化")
st.plotly_chart(fig)



st.title("🐍 Hello Streamlit!")
st.subheader("一个来自你电脑的小网页")
st.write("你可以在这儿放图表、输入框、按钮，甚至你的人生感悟。")
st.write("下面是一个简单的图表：")


# 输入框
name = st.text_input("你叫什么名字？")
if name:
    st.success(f"你好，{name}！很高兴见到你。")
 
# 示例数据表格
st.write("下面是一个虚拟的数据表：")
df = pd.DataFrame({
    "日期": pd.date_range("2024-01-01", periods=5),
    "温度（℃）": [23, 21, 22, 20, 19]
})
st.dataframe(df)

# 按钮

if st.button("点我一下"):
    st.balloons() 
    