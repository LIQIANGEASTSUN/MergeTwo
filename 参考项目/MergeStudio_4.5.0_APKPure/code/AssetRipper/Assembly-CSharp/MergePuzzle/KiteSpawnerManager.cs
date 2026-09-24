using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using MergePuzzle.BoardEvents;
using MergePuzzle.DailyChallenge;
using MergePuzzle.SpecialTasks;
using Paxie.MergeStudio.GameCore.Gameplay.Board.BoardCore;

namespace MergePuzzle
{
	public class KiteSpawnerManager : KiteManagerBase
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CInit_003Ed__11 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public KiteSpawnerManager _003C_003E4__this;

			public KiteModelBalanceConfig balanceConfig;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CInitBoardEvent_003Ed__12 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public KiteEventBoardConfig eventBoardConfig;

			public KiteSpawnerManager _003C_003E4__this;

			public BoardEventBoardData boardData;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[NonSerialized]
		public KiteGeneralSpawnerConfigModel _kiteGeneralSpawnerConfigModel;

		[NonSerialized]
		public KiteIndividualSpawnerConfigModel _kiteIndividualSpawnerConfigModel;

		public static KiteSpawnerManager _instance;

		[NonSerialized]
		public Dictionary<Tuple<int, int>, KiteSpawnerElementModel> _spawnerElementConfigs;

		[NonSerialized]
		public ValueForHasSet<float, Tuple<int, int>> _capacityMultiplier;

		[NonSerialized]
		public ValueForHasSet<float, Tuple<int, int>> _rechargePriceMultiplier;

		[NonSerialized]
		public ValueForHasSet<float, Tuple<int, int>> _rechargeDurationMultiplier;

		[NonSerialized]
		public Dictionary<string, AdaptorBase> _configAdaptors;

		public static readonly long WeekAnchorMs;

		public static KiteSpawnerManager Instance => null;

		[AsyncStateMachine(typeof(_003CInit_003Ed__11))]
		public UniTask Init(KiteModelBalanceConfig balanceConfig)
		{
			return default(UniTask);
		}

		[AsyncStateMachine(typeof(_003CInitBoardEvent_003Ed__12))]
		public UniTask InitBoardEvent(KiteEventBoardConfig eventBoardConfig, BoardEventBoardData boardData)
		{
			return default(UniTask);
		}

		public void InitRecurringEventPerishableSpawners(List<BalancePerishableConfigModelItem> perishableConfigModelItems, IBoardData boardData)
		{
		}

		public void ReadBalanceChestConfig(BalanceChestConfigModel kiteConfig, BoardData boardData)
		{
		}

		public void ReadBalanceSpawnerConfig(BalanceSpawnerConfigModel kiteConfig, BoardData boardData)
		{
		}

		public void ReadBalanceProgressiveConfig(List<BalanceProgressiveConfigModel> kiteConfig)
		{
		}

		public void ReadSpecialTaskConfig(KiteSpecialTaskConfig kiteConfig, BoardData boardData)
		{
		}

		public void ReadDailyChallengeConfig(BoardData boardData)
		{
		}

		public void CreateProgressiveAdaptors(List<BalanceProgressiveConfigModel> kiteConfig)
		{
		}

		public void CreateChestSpawnerConfigAdaptors(List<BalanceChestConfigModelItem> configList, BoardData boardData)
		{
		}

		public void CreatePickBoxSpawnerConfigAdaptors(List<BalancePickBoxConfigModelItem> configList, BoardData boardData)
		{
		}

		public static List<KiteDailyChallengeDayConfig> GetActiveDayConfigList(KiteDailyChallengeConfig config)
		{
			return null;
		}

		public void CreateDailyChallengePickBoxSpawnerConfigAdaptors(KiteDailyChallengeConfig kiteDailyChallengeConfig, BoardData boardData)
		{
		}

		public void CreatePerishableSpawnerConfigAdaptors(List<BalancePerishableConfigModelItem> configList, IBoardData boardData)
		{
		}

		public void CreateLevelBasedChestSpawnerConfigAdaptors(List<BalanceLevelBasedChestSpawnerConfigModelItem> configList, BoardData boardData)
		{
		}

		public void CreateTaskSupportChestConfigAdaptors(List<BalanceTaskSupportChestModel> configList, BoardData boardData)
		{
		}

		public void CreateSpawnerConfigAdaptors(List<BalanceSpawnerConfigModelItem> configList, BoardData boardData)
		{
		}

		public void CreateChargeAdaptors(List<BalanceChargeModelItem> configList)
		{
		}

		public void CheckKiteConfigWithBoardData(BoardData boardData)
		{
		}

		public bool TryGetAdaptorConfig<T>(int setID, int level, out T adaptor) where T : AdaptorBase
		{
			adaptor = null;
			return false;
		}

		public bool TryAddAdaptorOnFailedAttempt<T>(int setID, int level, out T adaptor) where T : AdaptorBase
		{
			adaptor = null;
			return false;
		}

		public bool TryGetAdaptorConfig<T>(int setID, out T spawnerAdaptor) where T : AdaptorBase
		{
			spawnerAdaptor = null;
			return false;
		}
	}
}
