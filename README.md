שאלה1. מיון הכנסה30נקודותבשאלה זו נממש אלגורית ם של מיון הכנסה כמו שראיתם באלגוריתמי מיון. למי שלא זוכר או לא למד
ניתן לקרא בויקיפדיהמיון הכנסה.
בשאלה זו בלבד חל איסור להשתמש בכתיב מערכים (כלומר גישה לאיבר עם סוגריים מרובעים []). ניתן
להשתמש ב[] רק בשורת ההצהרה על המערך כשקובעים את גודלו. לאחר מכן כל גישה למערך חייבת
להיות עם אריתמתיקה של מצביעים:*(arr + i)
סעיף אshift_element10נקודות.
יש לממש את הפונקציה עם החתימה:
shift_element(int* arr, int i)
הפונקציה תקבל מצביע למערך (לא בהכרח לתחילת המערך) ומספר.הפונקציה תזיז אתiהאיברים
הבאים במערך תא אחד ימינה. שימו לב כי הפונקציה מניחה כי קיים זיכרון ללפחותi+1תאים אחרי
המצביע למערך.
סעיף בinsertion sort20נקודות
עליכם לממש את הפונקציה עם החתימה:
insertion_sort(int* arr , int len)
על הפונקציה לקבל מערך בגודלlenולמיין אותו בעזרת האלגוריתם מיון הכנסה.ניתן ורצוילהיעזר
בפונקציה מסעיף א.
עליכם לכתובmainשיקבל50מספרים מהמשתמש,יכניס אותם למערך בגודל50(יש להגדיר עם
define),ימיין את המערך וידפיס למסך את המערך הממוין.
השורה האחרונה בפלט חייבת להיות המערך הממוין כאשר האיברים מופרדים ב',' ללא רווחים נוספים.
לדוגמא עבור הקלט:63910
הפלט יהיה:3,6,9,10
עבור הדיבאגמומלץ לקבל קלט מקובץ כמו שראינו בתרגול על לינוקס.
