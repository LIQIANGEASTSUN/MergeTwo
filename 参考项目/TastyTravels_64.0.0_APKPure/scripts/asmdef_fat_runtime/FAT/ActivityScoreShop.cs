using System;
using System.Collections.Generic;
using Config;
using FAT.Merge;
using IFix.Core;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ActivityScoreShop : GiftPack, IBoardEntry, IActivityOrderHandler
	{
		public enum ScoreShopNodeType
		{
			CostToken = 0,
			IAP = 1
		}

		public enum ScoreGenerationType
		{
			EnergyOnly = 0,
			OrderOnly = 1,
			Compound = 2
		}

		public class Node
		{
			public int Index;

			public ScoreShopNodeType Type;

			public int CostToken;

			public int PackId;

			public int RewardConfigId;

			public List<RewardConfig> Rewards;

			public string GetPackPrice()
			{
				return null;
			}
		}

		public enum NodeState
		{
			Completed = 0,
			Current = 1,
			Locked = 2
		}

		[NonSerialized]
		public int _detailId;

		[NonSerialized]
		public int _tokenCount;

		[NonSerialized]
		public int _currentNodeIndex;

		[NonSerialized]
		public EventScoreShop _eventConf;

		[NonSerialized]
		public ScoreShopDetail _detailConf;

		[NonSerialized]
		public List<Node> _nodes;

		[NonSerialized]
		public ScoreShopSpawnBonusHandler _spawnBonusHandler;

		[NonSerialized]
		public ScoreEntity _scoreEntity;

		[NonSerialized]
		public ScoreGenerationType _tokenGenerationType;

		[NonSerialized]
		public bool _hasClaimableNode;

		public int TokenId => 0;

		public int TokenCount => 0;

		public int CurrentNodeIndex => 0;

		public int NodeCount => 0;

		public string ThemeFontStyleId_Score => null;

		public List<RewardCommitData> NodeRewardData { get; set; }

		public override bool Valid => false;

		public bool HasEnd { get; set; }

		public override int ThemeId => 0;

		public EventScoreShop EventConf => null;

		public VisualPopup VisualMain { get; }

		public VisualPopup VisualHelp { get; }

		public VisualPopup VisualEnd { get; }

		public bool IsEntryIconDisplayNum => false;

		public bool IsEntryNotOnBoard => false;

		public Node CurrentNode => null;

		public override int PackId
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public override int StockTotal => 0;

		public ActivityScoreShop(ActivityLite lite_)
		{
		}

		public void RefreshTheme()
		{
		}

		public override void SetupFresh()
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void WhenReset()
		{
		}

		public override void WhenEnd()
		{
		}

		public override void Open()
		{
		}

		[IDTag(1)]
		public override void TryPopup(ScreenPopup popup_, PopupType state_)
		{
		}

		[IDTag(0)]
		public void TryPopup()
		{
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		public bool ConsumeClaimableFlag()
		{
			return false;
		}

		public void TrackClaim(Node node)
		{
		}

		public void Init()
		{
		}

		public void TryAddToken(int tokenId, int count, ReasonString reasonString = null)
		{
		}

		public void AddTokenInternal(int count, ReasonString reasonString = null)
		{
		}

		public bool CanClaimCurrent()
		{
			return false;
		}

		public bool IsEntryRedDotOn(int? tokenCount = null)
		{
			return false;
		}

		public void TryClaimCurrentReward(int index)
		{
		}

		public void ClaimTokenReward(Node node)
		{
		}

		public void ClaimIAPReward(Node node)
		{
		}

		public override void PurchaseSuccess(int packId_, IList<RewardCommitData> rewards_, bool late_)
		{
		}

		public void ForwardToNextNode()
		{
		}

		public NodeState GetNodeState(int index)
		{
			return default(NodeState);
		}

		public override BonusReward MatchPack(int packId_)
		{
			return null;
		}

		public Node GetNode(int i)
		{
			return null;
		}

		public void OpenHelp()
		{
		}

		public ScoreGenerationType GetScoreGenerationType()
		{
			return default(ScoreGenerationType);
		}

		public void RemoveTokenHandler()
		{
		}

		public void AddTokenHandler()
		{
		}

		public void OnTokenFlyEnd(FlyableItemSlice slice)
		{
		}

		public void SetupScoreEntity()
		{
		}

		public void ClearScoreEntity()
		{
		}

		public void RegisterSpawnBonusHandler()
		{
		}

		public void UnregisterSpawnBonusHandler()
		{
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		public new bool _003C_003EiFixBaseProxy_get_Valid()
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public void _003C_003EiFixBaseProxy_SaveSetup(ActivityInstance P0)
		{
		}

		public void _003C_003EiFixBaseProxy_LoadSetup(ActivityInstance P0)
		{
		}

		public void _003C_003EiFixBaseProxy_WhenReset()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}

		public void _003C_003EiFixBaseProxy_Open()
		{
		}

		public new void _003C_003EiFixBaseProxy_TryPopup(ScreenPopup P0, PopupType P1)
		{
		}

		public void _003C_003EiFixBaseProxy_PurchaseSuccess(int P0, IList<RewardCommitData> P1, bool P2)
		{
		}

		public BonusReward _003C_003EiFixBaseProxy_MatchPack(int P0)
		{
			return null;
		}
	}
}
