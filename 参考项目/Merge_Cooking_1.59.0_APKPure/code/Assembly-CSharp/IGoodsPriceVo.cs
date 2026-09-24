using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class IGoodsPriceVo : BaseVO
{
	public int goodsID;

	public int unlock;

	public int adTimes;

	public int buy;

	public int adBuy;

	public int ItemID;

	public int sell;

	public string price = "";

	public Dictionary<EItemID, int> GetCostConfig()
	{
		Dictionary<EItemID, int> dictionary = new Dictionary<EItemID, int>();
		string[] array = price.Split(';');
		for (int i = 0; i < array.Length; i++)
		{
			string[] array2 = array[i].Split('|');
			if (array2.Length == 2)
			{
				int result = -1;
				int result2 = -1;
				int.TryParse(array2[0], out result);
				int.TryParse(array2[1], out result2);
				if (result != -1 && result2 != -1 && !dictionary.ContainsKey((EItemID)result))
				{
					dictionary.Add((EItemID)result, result2);
				}
				else
				{
					Log.E("숌끕₷䔍䍝5\u0085厄수끈澶漙爔\u0015Â叁수끉斉’摝1\u009a厙刕枟\ud988Ď" + goodsID);
				}
			}
		}
		return dictionary;
	}
}
