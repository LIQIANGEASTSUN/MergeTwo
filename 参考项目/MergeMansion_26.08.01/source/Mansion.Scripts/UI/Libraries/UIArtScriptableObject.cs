using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using JetBrains.Annotations;
using Pool;
using UI.GameEvents;
using UI.Indicators;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace UI.Libraries
{
	[CreateAssetMenu(fileName = "Generic UI Art", menuName = "ScriptableObjects/UIArtScriptableObject", order = 1)]
	public class UIArtScriptableObject : ScriptableObject
	{
		[Serializable]
		public class CurrencyMapping
		{
			public Currencies currency;

			public Sprite icon;
		}

		[Serializable]
		public class SinkTagMapping
		{
			public string SinkTag;

			public Sprite icon;
		}

		[Serializable]
		public class IndicatorMapping
		{
			[SerializeField]
			public IndicatorType indicator;

			[SerializeField]
			public Sprite icon;
		}

		[Serializable]
		public class CurrencyPackMapping
		{
			public string pack;

			public Sprite icon;
		}

		[Serializable]
		public class EnergyPopupPackMapping
		{
			public string pack;

			public Sprite icon;
		}

		public class PrefabPool : IObjectPool<ObjectPoolElement>, IObjectPool, IDisposable
		{
			[NonSerialized]
			public readonly Func<ObjectPoolElement> factory;

			public string PoolName => null;

			public ObjectPoolStats Stats => null;

			public bool IsPrepared => false;

			public PrefabPool(Func<ObjectPoolElement> factoryFunction)
			{
			}

			public void Prepare()
			{
			}

			public UniTask PrepareAsync(CancellationToken ct)
			{
				return default(UniTask);
			}

			public void Dispose()
			{
			}

			public ObjectPoolElement Get()
			{
				return null;
			}

			public void Return(ObjectPoolElement instance)
			{
			}
		}

		[SerializeField]
		public CurrencyMapping[] currencyMappings;

		[SerializeField]
		public SinkTagMapping[] sinkTagMappings;

		[SerializeField]
		public CurrencyMapping[] rewardAnimationMappings;

		[SerializeField]
		public IndicatorMapping[] indicatorMappings;

		[SerializeField]
		public CurrencyPackMapping[] currencyPackMappings;

		[SerializeField]
		public EnergyPopupPackMapping[] energyPopupPackMappings;

		[SerializeField]
		public Sprite bubbleIcon;

		[SerializeField]
		public Sprite timeIcon;

		[SerializeField]
		public Sprite eventPoints;

		[SerializeField]
		public EventPointsImage eventPointsPrefab;

		[SerializeField]
		public ObjectPoolImage currencyPrefab;

		[SerializeField]
		public Sprite dailyScoopPointIcon;

		[SerializeField]
		public Sprite boultonLeaguePoints;

		[SerializeField]
		public EventPointsImage boultonLeaguePointsPrefab;

		[SerializeField]
		public EventPointsImage shortLeaderboardEventStarsPrefab;

		public AssetReferenceT<Sprite> AutoMergeFeatureIconRef;

		[Header("Auto-activated Boosters")]
		[SerializeField]
		public Sprite activateInfiniteEnergy;

		[SerializeField]
		public Sprite skipTime;

		[SerializeField]
		public Sprite cooldownRemover;

		[SerializeField]
		public Sprite onFire;

		[SerializeField]
		public ObjectPoolImage cooldownRemoverPrefab;

		[SerializeField]
		public Sprite _autoActivatedAutoMergeBooster;

		[SerializeField]
		public CoreSupportEventTokenIconLibrary coreSupportEventTokenIconLibrary;

		[PublicAPI]
		public Sprite BubbleIcon => null;

		[PublicAPI]
		public Sprite TimeIcon => null;

		[PublicAPI]
		public Sprite EventPoints => null;

		[PublicAPI]
		public EventPointsImage EventPointsPrefab => null;

		[PublicAPI]
		public ObjectPoolImage CurrencyPrefab => null;

		[PublicAPI]
		public Sprite ActivateInfiniteEnergy => null;

		[PublicAPI]
		public Sprite SkipTime => null;

		[PublicAPI]
		public Sprite CoolDownRemover => null;

		[PublicAPI]
		public ObjectPoolImage CoolDownRemoverPrefab => null;

		[PublicAPI]
		public Sprite OnFire => null;

		[PublicAPI]
		public Sprite DailyScoopPointIcon => null;

		[PublicAPI]
		public Sprite BoultonLeaguePoints => null;

		[PublicAPI]
		public EventPointsImage BoultonLeaguePointsPrefab => null;

		[PublicAPI]
		public EventPointsImage ShortLeaderboardEventStarsPrefab => null;

		[PublicAPI]
		public Sprite AutoActivatedAutoMergeBooster => null;

		[PublicAPI]
		public IDictionary<Currencies, Sprite> CurrencyIcons { get; set; }

		[PublicAPI]
		public IDictionary<string, Sprite> SinkTagsIcons { get; set; }

		[PublicAPI]
		public IDictionary<Currencies, Sprite> RewardAnimationIcons { get; set; }

		[PublicAPI]
		public IDictionary<IndicatorType, Sprite> IndicatorIcons { get; set; }

		[PublicAPI]
		public IDictionary<string, Sprite> CurrencyPackIcons { get; set; }

		[PublicAPI]
		public IDictionary<string, Sprite> EnergyPopupIcons { get; set; }

		public CoreSupportEventTokenIconLibrary CoreSupportEventTokenIconLibrary => null;

		[ContextMenu("Refresh Elements")]
		public void OnEnable()
		{
		}
	}
}
