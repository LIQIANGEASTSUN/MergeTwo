using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Animations.Flying;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Dialogue;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Hotspots;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Story;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Tutorial;

namespace Metacore.MergeMansion.Tutorial.MaddieMeetsMansion
{
	public class MaddieMeetsMansionTutorialBoardState
	{
		[Serializable]
		public class Durations
		{
			public float DelayUntilIdle;

			public float DelayBeforeTutorialHand;

			public float DelayBeforeBoardHide;

			public float DelayBeforeItemFly;

			public float DelayBeforeCompleteDialogueHide;
		}

		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass18_0
		{
			public MaddieMeetsMansionTutorialBoardState _003C_003E4__this;

			public CancellationToken ct;

			public Action<BoardStepResult> boardStepResultListener;

			public void _003CFlow_003Eb__0(BoardStepResult _)
			{
			}

			public void _003CFlow_003Eb__1()
			{
			}
		}

		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass30_0
		{
			public MaddieMeetsMansionTutorialBoardState _003C_003E4__this;

			public Coordinate coordinate;

			public IItemDefinition itemDefinition;

			public HotspotDefinition hotspotDefinition;

			public CancellationToken ct;

			public void _003CCompleteBoard_003Eb__0()
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CCompleteBoard_003Ed__30 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public MaddieMeetsMansionTutorialBoardState _003C_003E4__this;

			public Coordinate coordinate;

			public IItemDefinition itemDefinition;

			public HotspotDefinition hotspotDefinition;

			public CancellationToken ct;

			[NonSerialized]
			public _003C_003Ec__DisplayClass30_0 _003C_003E8__1;

			[NonSerialized]
			public StoryDefinitionId _003CstoryDefinitionId_003E5__2;

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
		public struct _003CFlow_003Ed__18 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public MaddieMeetsMansionTutorialBoardState _003C_003E4__this;

			public CancellationToken ct;

			[NonSerialized]
			public _003C_003Ec__DisplayClass18_0 _003C_003E8__1;

			[NonSerialized]
			public MetacoreTime _003CstartTime_003E5__2;

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
		public struct _003CFlyItemToHotspotDelayed_003Ed__32 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public MaddieMeetsMansionTutorialBoardState _003C_003E4__this;

			public CancellationToken ct;

			public Coordinate coordinate;

			public IItemDefinition itemDefinition;

			public HotspotDefinition hotspotDefinition;

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
		public struct _003CHideBoardDelayed_003Ed__33 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public MaddieMeetsMansionTutorialBoardState _003C_003E4__this;

			public CancellationToken ct;

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
		public struct _003CHideCompleteDialogueDelayed_003Ed__31 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public MaddieMeetsMansionTutorialBoardState _003C_003E4__this;

			public CancellationToken ct;

			public StoryDefinitionId storyDefinitionId;

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

		public static readonly Dictionary<MergeBoardId, StoryDefinitionId> BOARD_FULL_STORY_DEFINITION_IDS;

		public static readonly Dictionary<int, StoryDefinitionId> GUIDE_STORY_DEFINITION_IDS_BY_ITEM_ID;

		public static readonly Dictionary<HotspotId, StoryDefinitionId> COMPLETE_STORY_DEFINITION_IDS_BY_HOTSPOT_ID;

		public static readonly Dictionary<MergeBoardId, HotspotId> HOTSPOT_IDS_BY_MERGE_BOARD_ID;

		public static readonly BoardStepResult[] IDLE_BREAKING_ACTIONS;

		public const float AFTER_STOP_EXISTING_DIALOGUE_DELAY = 1f;

		[NonSerialized]
		public readonly IPlayer _player;

		[NonSerialized]
		public readonly ILocationTutorialHotspots _tutorialHotspots;

		[NonSerialized]
		public readonly IBoardController _boardController;

		[NonSerialized]
		public readonly IDialogueController _dialogueController;

		[NonSerialized]
		public readonly ITutorialController _tutorialController;

		[NonSerialized]
		public readonly IFlightControl _flightControl;

		[NonSerialized]
		public readonly MaddieMeetsMansionTutorialFlyingItem _flyingItemPrefab;

		[NonSerialized]
		public readonly Durations _durations;

		[NonSerialized]
		public readonly Action<MergeBoardId> _onHide;

		[NonSerialized]
		public bool _boardCompleted;

		public MaddieMeetsMansionTutorialBoardState(IPlayer player, ILocationTutorialHotspots tutorialHotspots, IBoardController boardController, IDialogueController dialogueController, ITutorialController tutorialController, IFlightControl flightControl, MaddieMeetsMansionTutorialFlyingItem flyingItemPrefab, Durations durations, Action<MergeBoardId> onHide)
		{
		}

		[AsyncStateMachine(typeof(_003CFlow_003Ed__18))]
		public UniTaskVoid Flow(CancellationToken ct)
		{
			return default(UniTaskVoid);
		}

		public Option<MetaTime> GetLastIdleBreakingActionTime()
		{
			return default(Option<MetaTime>);
		}

		public Option<(int, BoardStepResult)> GetItemAndBoardStepResult()
		{
			return default(Option<(int, BoardStepResult)>);
		}

		public Option<int> FindItemToMerge(List<MergeItem> items)
		{
			return default(Option<int>);
		}

		public Option<int> GetMaxItemLevel(List<MergeItem> items)
		{
			return default(Option<int>);
		}

		public Option<int> FindItemToMerge(List<MergeItem> items, int itemLevel)
		{
			return default(Option<int>);
		}

		public static Option<int> FindItemToTap(IMergeMansionGameConfig gameConfig, List<MergeItem> items)
		{
			return default(Option<int>);
		}

		public void TriggerTutorialHand(int itemId, BoardStepResult boardStepResult)
		{
		}

		public static Option<StoryDefinitionId> GetBoardIsFullOrItemGuideStoryDefinitionId(IBoard board, int itemId)
		{
			return default(Option<StoryDefinitionId>);
		}

		public void OnBoardStepResult(CancellationToken ct)
		{
		}

		public void OnMergeResult(MergeResult mergeResult)
		{
		}

		public bool HandleBoardCompletion(CancellationToken ct)
		{
			return false;
		}

		[AsyncStateMachine(typeof(_003CCompleteBoard_003Ed__30))]
		public UniTaskVoid CompleteBoard(Coordinate coordinate, IItemDefinition itemDefinition, HotspotDefinition hotspotDefinition, CancellationToken ct)
		{
			return default(UniTaskVoid);
		}

		[AsyncStateMachine(typeof(_003CHideCompleteDialogueDelayed_003Ed__31))]
		public UniTaskVoid HideCompleteDialogueDelayed(StoryDefinitionId storyDefinitionId, CancellationToken ct)
		{
			return default(UniTaskVoid);
		}

		[AsyncStateMachine(typeof(_003CFlyItemToHotspotDelayed_003Ed__32))]
		public UniTaskVoid FlyItemToHotspotDelayed(Coordinate coordinate, IItemDefinition itemDefinition, HotspotDefinition hotspotDefinition, CancellationToken ct)
		{
			return default(UniTaskVoid);
		}

		[AsyncStateMachine(typeof(_003CHideBoardDelayed_003Ed__33))]
		public UniTaskVoid HideBoardDelayed(CancellationToken ct)
		{
			return default(UniTaskVoid);
		}

		public Option<(MergeBoardId, Coordinate, IItemDefinition, HotspotDefinition)> GetBoardCompletionData()
		{
			return default(Option<(MergeBoardId, Coordinate, IItemDefinition, HotspotDefinition)>);
		}

		public void FlyItemToHotspot(Coordinate coordinate, IItemDefinition itemDefinition, HotspotDefinition hotspotDefinition)
		{
		}

		public void HideBoard()
		{
		}

		public void DisableBoardInput(CancellationToken ct)
		{
		}
	}
}
