using System.Collections.Generic;
using TLF;

public static class GoodsConfigTool
{
	public static Dictionary<int, List<int>> m_GeneratorSeries_BaseSeries_Dic = new Dictionary<int, List<int>>();

	public static Dictionary<int, List<int>> m_GeneratorSeries_BaseSeries_Dic_Initiative = new Dictionary<int, List<int>>();

	public static Dictionary<int, List<int>> m_GeneratorSeries_BaseSeries_Dic_Passive = new Dictionary<int, List<int>>();

	public static Dictionary<int, int> m_BaseSeries_GeneratorSeries_Dic = new Dictionary<int, int>();

	public static Dictionary<int, int> m_BaseSeries_GeneratorSeries_Dic_Initiative = new Dictionary<int, int>();

	public static Dictionary<int, int> m_BaseSeries_GeneratorSeries_Dic_Passive = new Dictionary<int, int>();

	public static Dictionary<int, List<int>> m_InstrumentSeries_InstrumentGoodsIDs_Dic = new Dictionary<int, List<int>>();

	public static Dictionary<int, List<int>> m_InstrumentSeries_InstrumentGoodsIDs_Dic_MultiUse = new Dictionary<int, List<int>>();

	public static Dictionary<int, List<int>> m_InstrumentSeries_InstrumentGoodsIDs_Dic_SingleUse = new Dictionary<int, List<int>>();

	public static bool IsBaseSeries(int productSeries)
	{
		Init_GeneratorSeries2BaseSeries_Dic();
		return m_BaseSeries_GeneratorSeries_Dic.ContainsKey(productSeries);
	}

	public static bool IsBaseSeries_Initiative(int productSeries)
	{
		Init_GeneratorSeries2BaseSeries_Dic();
		return m_BaseSeries_GeneratorSeries_Dic_Initiative.ContainsKey(productSeries);
	}

	public static bool IsBaseSeries_Passive(int productSeries)
	{
		Init_GeneratorSeries2BaseSeries_Dic();
		return m_BaseSeries_GeneratorSeries_Dic_Passive.ContainsKey(productSeries);
	}

	public static int GetGeneratorSeriesByBaseSeries(int baseSeries)
	{
		Init_GeneratorSeries2BaseSeries_Dic();
		m_BaseSeries_GeneratorSeries_Dic.TryGetValue(baseSeries, out var value);
		return value;
	}

	public static bool IsGeneratorSeries(int judgeSeries)
	{
		Init_GeneratorSeries2BaseSeries_Dic();
		return m_GeneratorSeries_BaseSeries_Dic.ContainsKey(judgeSeries);
	}

	public static bool IsGeneratorSeries_Initiative(int judgeSeries)
	{
		Init_GeneratorSeries2BaseSeries_Dic();
		return m_GeneratorSeries_BaseSeries_Dic_Initiative.ContainsKey(judgeSeries);
	}

	public static bool IsGeneratorSeries_Passive(int judgeSeries)
	{
		Init_GeneratorSeries2BaseSeries_Dic();
		return m_GeneratorSeries_BaseSeries_Dic_Passive.ContainsKey(judgeSeries);
	}

	public static List<int> GetBaseSeriesListByGeneratorSeries(int generatorSeries)
	{
		Init_GeneratorSeries2BaseSeries_Dic();
		m_GeneratorSeries_BaseSeries_Dic.TryGetValue(generatorSeries, out var value);
		return value;
	}

	public static bool IsInstrumentSeries(int instrumentSeries)
	{
		Init_GeneratorSeries2BaseSeries_Dic();
		return m_InstrumentSeries_InstrumentGoodsIDs_Dic.ContainsKey(instrumentSeries);
	}

	public static bool IsInstrumentSeries_MultiUse(int instrumentSeries)
	{
		Init_GeneratorSeries2BaseSeries_Dic();
		return m_InstrumentSeries_InstrumentGoodsIDs_Dic_MultiUse.ContainsKey(instrumentSeries);
	}

	public static bool IsInstrumentSeries_SingleUse(int instrumentSeries)
	{
		Init_GeneratorSeries2BaseSeries_Dic();
		return m_InstrumentSeries_InstrumentGoodsIDs_Dic_SingleUse.ContainsKey(instrumentSeries);
	}

	private static void Init_GeneratorSeries2BaseSeries_Dic()
	{
		if (m_GeneratorSeries_BaseSeries_Dic_Initiative.Count == 0)
		{
			List<IGoodsProduceVo> list = new List<IGoodsProduceVo>();
			list.AddRange(StaticDataBase<StaticDataManager>.GetInstance().InitiativeProduceList.list);
			list.AddRange(StaticDataBase<StaticDataManager>.GetInstance().PassiveProduceList.list);
			IGoodsProduceVo goodsProduceVo = null;
			IGoodsBaseVo goodsBaseVo = null;
			List<int> list2 = new List<int>();
			for (int i = 0; i < list.Count; i++)
			{
				goodsProduceVo = list[i];
				if (goodsProduceVo == null)
				{
					continue;
				}
				goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsProduceVo.goodsID);
				if (goodsBaseVo == null || (goodsBaseVo.type != 2 && goodsBaseVo.type != 5))
				{
					continue;
				}
				list2 = goodsProduceVo.GetDirectProduceSeriesList();
				if (list2 == null || list2.Count == 0)
				{
					continue;
				}
				if (m_GeneratorSeries_BaseSeries_Dic.ContainsKey(goodsBaseVo.series))
				{
					m_GeneratorSeries_BaseSeries_Dic[goodsBaseVo.series].AddRange(list2);
				}
				else
				{
					m_GeneratorSeries_BaseSeries_Dic.Add(goodsBaseVo.series, list2);
				}
				if (goodsBaseVo.type == 2)
				{
					if (m_GeneratorSeries_BaseSeries_Dic_Initiative.ContainsKey(goodsBaseVo.series))
					{
						m_GeneratorSeries_BaseSeries_Dic_Initiative[goodsBaseVo.series].AddRange(list2);
					}
					else
					{
						m_GeneratorSeries_BaseSeries_Dic_Initiative.Add(goodsBaseVo.series, list2);
					}
				}
				if (goodsBaseVo.type == 5)
				{
					if (m_GeneratorSeries_BaseSeries_Dic_Passive.ContainsKey(goodsBaseVo.series))
					{
						m_GeneratorSeries_BaseSeries_Dic_Passive[goodsBaseVo.series].AddRange(list2);
					}
					else
					{
						m_GeneratorSeries_BaseSeries_Dic_Passive.Add(goodsBaseVo.series, list2);
					}
				}
			}
			foreach (KeyValuePair<int, List<int>> item in m_GeneratorSeries_BaseSeries_Dic)
			{
				item.Value?.DeleteRepeat();
			}
			foreach (KeyValuePair<int, List<int>> item2 in m_GeneratorSeries_BaseSeries_Dic_Initiative)
			{
				item2.Value?.DeleteRepeat();
			}
			foreach (KeyValuePair<int, List<int>> item3 in m_GeneratorSeries_BaseSeries_Dic_Passive)
			{
				item3.Value?.DeleteRepeat();
			}
			foreach (KeyValuePair<int, List<int>> item4 in m_GeneratorSeries_BaseSeries_Dic)
			{
				if (item4.Value == null)
				{
					continue;
				}
				foreach (int item5 in item4.Value)
				{
					if (!m_BaseSeries_GeneratorSeries_Dic.ContainsKey(item5))
					{
						m_BaseSeries_GeneratorSeries_Dic.Add(item5, item4.Key);
					}
				}
			}
			foreach (KeyValuePair<int, List<int>> item6 in m_GeneratorSeries_BaseSeries_Dic_Initiative)
			{
				if (item6.Value == null)
				{
					continue;
				}
				foreach (int item7 in item6.Value)
				{
					if (!m_BaseSeries_GeneratorSeries_Dic_Initiative.ContainsKey(item7))
					{
						m_BaseSeries_GeneratorSeries_Dic_Initiative.Add(item7, item6.Key);
					}
				}
			}
			foreach (KeyValuePair<int, List<int>> item8 in m_GeneratorSeries_BaseSeries_Dic_Passive)
			{
				if (item8.Value == null)
				{
					continue;
				}
				foreach (int item9 in item8.Value)
				{
					if (!m_BaseSeries_GeneratorSeries_Dic_Passive.ContainsKey(item9))
					{
						m_BaseSeries_GeneratorSeries_Dic_Passive.Add(item9, item8.Key);
					}
				}
			}
		}
		if (m_InstrumentSeries_InstrumentGoodsIDs_Dic.Count != 0)
		{
			return;
		}
		List<IGoodsInstrumentVO> list3 = StaticDataBase<StaticDataManager>.GetInstance().GoodsInstrumentList.list;
		IGoodsInstrumentVO goodsInstrumentVO = null;
		IGoodsBaseVo goodsBaseVo2 = null;
		for (int j = 0; j < list3.Count; j++)
		{
			goodsInstrumentVO = list3[j];
			if (goodsInstrumentVO == null)
			{
				continue;
			}
			goodsBaseVo2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsInstrumentVO.goodsID);
			if (goodsBaseVo2 == null)
			{
				continue;
			}
			if (m_InstrumentSeries_InstrumentGoodsIDs_Dic.ContainsKey(goodsInstrumentVO.instrumentType))
			{
				m_InstrumentSeries_InstrumentGoodsIDs_Dic[goodsInstrumentVO.instrumentType].Add(goodsInstrumentVO.goodsID);
			}
			else
			{
				m_InstrumentSeries_InstrumentGoodsIDs_Dic.Add(goodsInstrumentVO.instrumentType, new List<int>());
			}
			if (IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVo2.type))
			{
				if (m_InstrumentSeries_InstrumentGoodsIDs_Dic_MultiUse.ContainsKey(goodsInstrumentVO.instrumentType))
				{
					m_InstrumentSeries_InstrumentGoodsIDs_Dic_MultiUse[goodsInstrumentVO.instrumentType].Add(goodsInstrumentVO.goodsID);
				}
				else
				{
					m_InstrumentSeries_InstrumentGoodsIDs_Dic_MultiUse.Add(goodsInstrumentVO.instrumentType, new List<int>());
				}
			}
			else if (IGoodsBaseVo.IsDisposableMachine(goodsBaseVo2.type))
			{
				if (m_InstrumentSeries_InstrumentGoodsIDs_Dic_SingleUse.ContainsKey(goodsInstrumentVO.instrumentType))
				{
					m_InstrumentSeries_InstrumentGoodsIDs_Dic_SingleUse[goodsInstrumentVO.instrumentType].Add(goodsInstrumentVO.goodsID);
				}
				else
				{
					m_InstrumentSeries_InstrumentGoodsIDs_Dic_SingleUse.Add(goodsInstrumentVO.instrumentType, new List<int>());
				}
			}
		}
	}
}
