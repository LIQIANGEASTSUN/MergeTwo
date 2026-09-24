using System;
using System.Reflection;
using TLF;
using UnityEngine;

public abstract class StaticDataBase<T> where T : class
{
	protected ResLoader _resLoader;

	private static T _instance;

	protected StaticDataBase()
	{
		_resLoader = new ResLoader();
	}

	public static T GetInstance()
	{
		if (_instance == null)
		{
			ConstructorInfo? constructorInfo = Array.Find(typeof(T).GetConstructors(BindingFlags.Instance | BindingFlags.NonPublic), (ConstructorInfo c) => c.GetParameters().Length == 0);
			if (constructorInfo == null)
			{
				throw new Exception("쉇끕抷汈乤'\u008e厍숩끙珹琪楛<Ò发숞끏⢺⤟牛 ¥厤숞끔澶生—4Â叁橮d4뀠k㰾䊈" + typeof(T));
			}
			_instance = constructorInfo.Invoke(null) as T;
		}
		return _instance;
	}

	public virtual void LoadStaticList(string path, object obj, bool clean = false, string needBaseTable = "")
	{
		string text = MonoSingleton<ConditionAdvanceManager>.Instance.GetTableNameByBaseTable(path);
		TextAsset val = _resLoader.LoadSync<TextAsset>(text);
		if (text != path && ((Object)(object)val == (Object)null || val.text.IsNullOrEmpty()))
		{
			text = path;
			val = _resLoader.LoadSync<TextAsset>(path);
		}
		if ((Object)(object)val != (Object)null)
		{
			if (clean && obj is IListSerializable)
			{
				(obj as IListSerializable)?.ClearList();
			}
			JsonUtility.FromJsonOverwrite(val.text, obj);
			if (obj is IMapSerializable)
			{
				((IMapSerializable)obj).InitMap();
			}
			MonoSingleton<ConditionAdvanceManager>.Instance.TableLoad_Step(text, needBaseTable);
			_resLoader.ReleaseRes(text);
		}
	}

	public virtual void LoadAllStaticData(bool dispose = true, bool clean = false)
	{
		string text = "";
		FieldInfo[] fields = GetType().GetFields();
		for (int i = 0; i < fields.Length; i++)
		{
			object[] customAttributes = fields[i].GetCustomAttributes(typeof(StaticDataListMeta), inherit: true);
			if (customAttributes != null && customAttributes.Length != 0)
			{
				text = ((StaticDataListMeta)customAttributes[0]).filePath;
				LoadStaticList(text, fields[i].GetValue(this), clean, text);
			}
		}
		if (dispose)
		{
			_resLoader.Dispose();
		}
	}

	public void ReloadLanguage()
	{
		FieldInfo[] fields = GetType().GetFields();
		for (int i = 0; i < fields.Length; i++)
		{
			object[] customAttributes = fields[i].GetCustomAttributes(typeof(StaticDataListMetaLanguage), inherit: true);
			if (customAttributes != null && customAttributes.Length != 0)
			{
				LoadStaticList(((StaticDataListMetaLanguage)customAttributes[0]).filePath, fields[i].GetValue(this));
			}
		}
		LocalizedLang.GetLangModel().SetUILang();
	}

	public void Destroy()
	{
		_instance = null;
	}

	public virtual void ReloadStaticData(string originalFilePath, string filePath)
	{
		if (string.IsNullOrEmpty(filePath))
		{
			return;
		}
		FieldInfo[] fields = GetType().GetFields();
		for (int i = 0; i < fields.Length; i++)
		{
			object[] customAttributes = fields[i].GetCustomAttributes(typeof(StaticDataListMeta), inherit: true);
			if (customAttributes != null && customAttributes.Length != 0 && ((StaticDataListMeta)customAttributes[0]).filePath == originalFilePath)
			{
				LoadStaticList(filePath, fields[i].GetValue(this), clean: true, originalFilePath);
			}
		}
	}

	public virtual void AddReplaceStaticData(string baseTableName, string addTableName)
	{
		string text = ReadTableJson(addTableName);
		if (text.IsNullOrEmpty())
		{
			return;
		}
		FieldInfo[] fields = GetType().GetFields();
		for (int i = 0; i < fields.Length; i++)
		{
			object[] customAttributes = fields[i].GetCustomAttributes(typeof(StaticDataListMeta), inherit: true);
			if (customAttributes != null && customAttributes.Length != 0 && ((StaticDataListMeta)customAttributes[0]).filePath == baseTableName)
			{
				(fields[i].GetValue(this) as IListReplaceItem).AddReplaceItem(text);
				break;
			}
		}
		MonoSingleton<ConditionAdvanceManager>.Instance.TableLoad_Step(addTableName, baseTableName);
	}

	public string ReadTableJson(string tableName)
	{
		TextAsset val = _resLoader.LoadSync<TextAsset>(tableName);
		if (val == null)
		{
			return null;
		}
		return val.text;
	}
}
