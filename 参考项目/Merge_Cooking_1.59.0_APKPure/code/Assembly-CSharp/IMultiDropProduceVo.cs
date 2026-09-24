using System;
using System.Collections.Generic;
using System.Linq;
using TLF;

[Serializable]
public class IMultiDropProduceVo : BaseVO
{
	public int goodsID;

	public int[] fixedProductions;

	public string production = "";

	public int[] rate;

	private List<List<BaseData2VO>> mProduceVos;

	public void InitProduceList()
	{
		mProduceVos = new List<List<BaseData2VO>>();
		string[] array = production.Split('_');
		for (int i = 0; i < array.Length; i++)
		{
			string[] array2 = array[i].Split(';');
			List<BaseData2VO> list = new List<BaseData2VO>();
			foreach (string text in array2)
			{
				if (!text.IsNullOrEmpty())
				{
					string[] array3 = text.Split('|');
					if (array3.Length == 2)
					{
						list.Add(new BaseData2VO
						{
							id = array3[0].ToInt(),
							num = array3[1].ToInt()
						});
					}
				}
			}
			mProduceVos.Add(list);
		}
	}

	public List<BaseData2VO> GetProduceVos(int sequenceID)
	{
		if (mProduceVos == null)
		{
			InitProduceList();
		}
		if (mProduceVos.Count > sequenceID)
		{
			return mProduceVos[sequenceID];
		}
		if (mProduceVos.Count > 0)
		{
			return mProduceVos[0];
		}
		return new List<BaseData2VO>();
	}

	public bool IsInRate(int _rate)
	{
		if (rate == null)
		{
			return false;
		}
		if (Enumerable.Contains(rate, _rate))
		{
			return true;
		}
		return false;
	}
}
