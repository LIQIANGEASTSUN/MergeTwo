using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Analytics;
using Animations;
using Code.GameLogic.ExtraSpawns;
using Code.GameLogic.GameEvents;
using Code.GameLogic.Hotspots;
using Code.InitFlow;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using GameLogic.Area;
using GameLogic.Hotspots;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using GameLogic.Story;
using Hotspots;
using Map;
using Merge;
using Metacore.Cutscenes;
using Metacore.MergeMansion.Areas;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.InputController;
using Metacore.MergeMansion.SystemGroups;
using Metacore.MergeMansion.Utility;
using Metacore.Rendering;
using Metaplay.Core;
using Metaplay.Core.Client;
using Pool;
using UI;
using UI.Indicators;
using UI.Messaging;
using UnityEngine;
using Utility;

public class HotspotController : IHotspotController, IHotspotCompletionEvents, IDirectorHotspots, IHotspotActivator, IHotspotCompletableQuery, IHotspotPositionQuery, INavigationHotspots, IHotspotCompletionState, IHotspotProgressRefresher, IMergeGoalItemQuery, IMapSpotMarkerHotspots, IHotspotVisibilityHider, IHotspotPopupActions, IIllustrationTaskHotspots, IPetSelectionHotspots, IMapCharacterHotspots, IDebugHotspots, ILocationTutorialHotspots, IEventHotspotRegistry, IAreaLockedHotspotActions, IAreaCompletionRewardHotspots, ILocationDependent, ITickSystem
{
	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass176_0
	{
		public float animationDuration;

		public HotspotController _003C_003E4__this;

		public Vector3 hotspotPosition;

		public Ease animationEaseStart;

		public int index;
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass176_1
	{
		public int completedCount;

		public _003C_003Ec__DisplayClass176_0 CS_0024_003C_003E8__locals1;

		public TweenCallback _003C_003E9__1;

		public void _003CTryToCompleteHotspotProcess_003Eb__1()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003C_003Ec__DisplayClass184_0
	{
		public Vector3 hotspotPosition;

		public HotspotController _003C_003E4__this;

		public float animationDuration;

		public Ease animationRewardEaseStart;

		public int index;
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass184_1
	{
		public int completedCount;

		public Action _003C_003E9__1;

		public Action _003C_003E9__0;

		public Action _003C_003E9__2;

		public void _003CTryToCompleteHotspotProcessV2_003Eb__1()
		{
		}

		public void _003CTryToCompleteHotspotProcessV2_003Eb__0()
		{
		}

		public void _003CTryToCompleteHotspotProcessV2_003Eb__2()
		{
		}
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass279_0
	{
		public bool hotspotAnimationReady;

		public IHotspotDefinition hotspotDefinition;

		public HotspotController _003C_003E4__this;

		public bool boardIsVisible;

		public void _003CHandleHotspotCompletionVisualMarker_003Eb__0()
		{
		}

		public void _003CHandleHotspotCompletionVisualMarker_003Eb__1()
		{
		}
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass280_0
	{
		public bool ready;

		public void _003CTriggerHotspotCompletionDebrisAnimation_003Eb__0()
		{
		}
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass283_0
	{
		public HotspotController _003C_003E4__this;

		public IHotspotDefinition hotspotDefinition;

		public bool ready;

		public void _003CTriggerHotspotCompletionCameraMovement_003Eb__0()
		{
		}

		public void _003CTriggerHotspotCompletionCameraMovement_003Eb__2()
		{
		}
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass283_1
	{
		public bool areaUnlockReady;

		public void _003CTriggerHotspotCompletionCameraMovement_003Eb__1()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CAreaCompletionRewardClaimedTimer_003Ed__196 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public CancellationToken ct;

		public HotspotController _003C_003E4__this;

		public HotspotId hotspot;

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
	public struct _003CAreaCompletionTimer_003Ed__194 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HotspotController _003C_003E4__this;

		public IAreaInfo areaInfo;

		public CancellationToken ct;

		public IHotspotDefinition completeFocusHotspot;

		public IWalletState walletState;

		public RandomPCG rewardContainerRandom;

		[NonSerialized]
		public Defer _003C__003E5__2;

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
	public struct _003CDebugForceSkipHotspotCompleteProcessTask_003Ed__269 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HotspotController _003C_003E4__this;

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

	[CompilerGenerated]
	public sealed class _003CGetNotMetTimeRequirements_003Ed__134 : IEnumerable<PlayerCurrentTimeRequirement>, IEnumerable, IEnumerator<PlayerCurrentTimeRequirement>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public PlayerCurrentTimeRequirement _003C_003E2__current;

		[NonSerialized]
		public int _003C_003El__initialThreadId;

		[NonSerialized]
		public IEnumerable<IPlayerRequirement> requirements;

		public IEnumerable<IPlayerRequirement> _003C_003E3__requirements;

		[NonSerialized]
		public IPlayer player;

		public IPlayer _003C_003E3__player;

		[NonSerialized]
		public IEnumerator<IPlayerRequirement> _003C_003E7__wrap1;

		PlayerCurrentTimeRequirement IEnumerator<PlayerCurrentTimeRequirement>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CGetNotMetTimeRequirements_003Ed__134(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		public void _003C_003Em__Finally1()
		{
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}

		[DebuggerHidden]
		IEnumerator<PlayerCurrentTimeRequirement> IEnumerable<PlayerCurrentTimeRequirement>.GetEnumerator()
		{
			return null;
		}

		[DebuggerHidden]
		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CHandleHotspotCompletionVisualMarker_003Ed__279 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IHotspotDefinition hotspotDefinition;

		public HotspotController _003C_003E4__this;

		public bool boardIsVisible;

		public CancellationToken cancellationToken;

		[NonSerialized]
		public _003C_003Ec__DisplayClass279_0 _003C_003E8__1;

		[NonSerialized]
		public bool _003CallowFastForward_003E5__2;

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
	public struct _003CHotspotCompleteProcessInput_003Ed__173 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public CancellationToken ct;

		public HotspotController _003C_003E4__this;

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
	public struct _003CPollHotspots_003Ed__115 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HotspotController _003C_003E4__this;

		public CancellationToken ct;

		public LocationId locationId;

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
	public struct _003CTimeShortPauseWithoutFastForward_003Ed__284 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HotspotController _003C_003E4__this;

		public CancellationToken cancellationToken;

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
	public struct _003CTriggerHotspotCompletionCameraMovement_003Ed__283 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HotspotController _003C_003E4__this;

		public IHotspotDefinition hotspotDefinition;

		public CancellationToken cancellationToken;

		[NonSerialized]
		public _003C_003Ec__DisplayClass283_1 _003C_003E8__1;

		[NonSerialized]
		public _003C_003Ec__DisplayClass283_0 _003C_003E8__2;

		public CameraZoomTarget cameraZoom;

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
	public struct _003CTriggerHotspotCompletionDebrisAnimation_003Ed__280 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public bool boardIsVisible;

		public IHotspotDefinition hotspotDefinition;

		public HotspotController _003C_003E4__this;

		public CancellationToken cancellationToken;

		[NonSerialized]
		public _003C_003Ec__DisplayClass280_0 _003C_003E8__1;

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
	public struct _003CTriggerHotspotCompletionVisualAction_003Ed__282 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IHotspotDefinition hotspotDefinition;

		public HotspotController _003C_003E4__this;

		public bool boardIsVisible;

		public CancellationToken cancellationToken;

		[NonSerialized]
		public float _003CanimationSpeed_003E5__2;

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
	public struct _003CTryToCompleteHotspotProcess_003Ed__176 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HotspotController _003C_003E4__this;

		public IHotspotDefinition hotspotDefinition;

		public List<IPlayerReward> rewards;

		public TaskSource taskSource;

		public bool giveBonusReward;

		public MetaDuration? bonusTimeLeft;

		public List<Vector3> requirementItemPositions;

		public CancellationToken cancellationToken;

		[NonSerialized]
		public _003C_003Ec__DisplayClass176_1 _003C_003E8__1;

		[NonSerialized]
		public _003C_003Ec__DisplayClass176_0 _003C_003E8__2;

		public List<IPlayerReward> difficultyRewards;

		public RewardsAnimationsFlags flags;

		public Action onCompleteAction;

		[NonSerialized]
		public Camera _003CcameraComponent_003E5__2;

		[NonSerialized]
		public bool _003CshowCurrencyBankRewards_003E5__3;

		[NonSerialized]
		public SpineRewardItemIndicator _003CrewardPrefab_003E5__4;

		[NonSerialized]
		public Transform _003CrequirementParentTransform_003E5__5;

		[NonSerialized]
		public float _003Cwait_003E5__6;

		[NonSerialized]
		public int _003Ccount_003E5__7;

		[NonSerialized]
		public int _003CcurrencyBankRewardCount_003E5__8;

		[NonSerialized]
		public IEnumerable<IPlayerReward> _003CcurrencyBankRewards_003E5__9;

		[NonSerialized]
		public int _003CallButtonsSiblingIndex_003E5__10;

		[NonSerialized]
		public List<SpineInfoItemIndicator> _003CinstantiatedItems_003E5__11;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public List<SpineRewardItemIndicator> _003CinstantiatedRewards_003E5__12;

		[NonSerialized]
		public List<SpineRewardItemIndicator> _003CinstantiatedCurrencyBankRewards_003E5__13;

		[NonSerialized]
		public List<string> _003CcanvasGroupsToShow_003E5__14;

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
	public struct _003CTryToCompleteHotspotProcessV2_003Ed__184 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HotspotController _003C_003E4__this;

		public IHotspotDefinition hotspotDefinition;

		public TaskSource taskSource;

		public bool giveBonusReward;

		public MetaDuration? bonusTimeLeft;

		public List<IPlayerReward> rewards;

		public List<Vector3> requirementItemPositions;

		public CancellationToken cancellationToken;

		[NonSerialized]
		public _003C_003Ec__DisplayClass184_0 _003C_003E8__1;

		[NonSerialized]
		public _003C_003Ec__DisplayClass184_1 _003C_003E8__2;

		public List<IPlayerReward> difficultyRewards;

		public RewardsAnimationsFlags flags;

		public Action onCompleteAction;

		[NonSerialized]
		public Camera _003CcameraComponent_003E5__2;

		[NonSerialized]
		public bool _003CboardIsVisible_003E5__3;

		[NonSerialized]
		public MergeBoard _003Cboard_003E5__4;

		[NonSerialized]
		public IEnumerable<(Coordinate Coordinate, MergeItem Item)> _003CremovedMergeboardItems_003E5__5;

		[NonSerialized]
		public bool _003CshowCurrencyBankRewards_003E5__6;

		[NonSerialized]
		public bool _003ChotspotIsInCurrentLocation_003E5__7;

		[NonSerialized]
		public SpineRewardItemIndicator _003CrewardPrefab_003E5__8;

		[NonSerialized]
		public SpineInfoItemIndicator _003CitemPrefab_003E5__9;

		[NonSerialized]
		public Transform _003CrequirementParentTransform_003E5__10;

		[NonSerialized]
		public Transform _003CrewardParentTransform_003E5__11;

		[NonSerialized]
		public AnimationConfig _003CrequirementAnimationConfig_003E5__12;

		[NonSerialized]
		public AnimationSettingsConfig _003CanimationSettingConfig_003E5__13;

		[NonSerialized]
		public float _003Cwait_003E5__14;

		[NonSerialized]
		public int _003Ccount_003E5__15;

		[NonSerialized]
		public int _003CcurrencyBankRewardCount_003E5__16;

		[NonSerialized]
		public IEnumerable<IPlayerReward> _003CcurrencyBankRewards_003E5__17;

		[NonSerialized]
		public List<string> _003CidsToShow_003E5__18;

		[NonSerialized]
		public int _003CallButtonsSiblingIndex_003E5__19;

		[NonSerialized]
		public List<SpineInfoItemIndicator> _003CinstantiatedItems_003E5__20;

		[NonSerialized]
		public IEnumerator<(Coordinate Coordinate, MergeItem Item)> _003C_003E7__wrap20;

		[NonSerialized]
		public SpineInfoItemIndicator _003Citem_003E5__22;

		[NonSerialized]
		public AnimationConfigObject _003CitemAnimationScript_003E5__23;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public List<SpineRewardItemIndicator> _003CinstantiatedRewards_003E5__24;

		[NonSerialized]
		public List<SpineRewardItemIndicator> _003CinstantiatedCurrencyBankRewards_003E5__25;

		[NonSerialized]
		public List<string> _003CcanvasGroupsToShow_003E5__26;

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
	public HashSet<HotspotId> _visibleHotspotsSet;

	[NonSerialized]
	public HashSet<HotspotId> _completedHotspotsSet;

	[NonSerialized]
	public readonly Dictionary<int, int> _itemsInActiveHotspots;

	[NonSerialized]
	public readonly Dictionary<string, MapSpotMarker> _mapSpots;

	[NonSerialized]
	public Dictionary<MapSpotId, List<MapSpotUIMarker>> _visibleMapSpots;

	[NonSerialized]
	public readonly Dictionary<string, HotspotId> _visibleEventHotspots;

	[NonSerialized]
	public readonly HashSet<HotspotId> _hotspotsToTryActivate;

	[NonSerialized]
	public List<PlayerCurrentTimeRequirement> _areaUnlockScheduleTimeRequirementsAscending;

	[NonSerialized]
	public List<(PlayerCurrentTimeRequirement requirement, HotspotId hotspot)> _taskUnlockScheduleTimeRequirementsAscending;

	[NonSerialized]
	public readonly List<UnityEngine.Object> _hideVisibleHotspotsRequesters;

	[NonSerialized]
	public List<HotspotId> _hotspotsToMakeVisibleOnMap;

	[NonSerialized]
	public List<(MetaTime endTime, HotspotId hotspot)> _taskBonusTimers;

	[NonSerialized]
	public IReadOnlyCollection<IAreaInfo> _currentAreasSet;

	[NonSerialized]
	public readonly IInputController _inputController;

	[NonSerialized]
	public readonly Director _director;

	[NonSerialized]
	public readonly PlayerModel _playerModel;

	[NonSerialized]
	public readonly IPlayerClientContext _playerClientContext;

	[NonSerialized]
	public readonly EventsMetaplay _eventsMetaplay;

	[NonSerialized]
	public readonly IAnalyticsCollector _analytics;

	[NonSerialized]
	public readonly DialogueRunner _dialogueRunner;

	[NonSerialized]
	public readonly MapController _mapController;

	[NonSerialized]
	public readonly IBoardController _iBoardController;

	[NonSerialized]
	public readonly LocationLoader _locationLoader;

	[NonSerialized]
	public readonly ITitleBarInfiniteEnergy _titleBarInfiniteEnergy;

	[NonSerialized]
	public readonly ITitleBarRewardWidgets _titleBarRewardWidgets;

	[NonSerialized]
	public readonly SceneContextMansion _sceneContextMansion;

	[NonSerialized]
	public readonly MenuController _menuController;

	[NonSerialized]
	public readonly MessagingController _messagingController;

	[NonSerialized]
	public readonly IHotspotCamera _cameraManager;

	[NonSerialized]
	public readonly IMapSpotCamera _mapSpotCamera;

	[NonSerialized]
	public readonly UnityBoardController _unityBoardController;

	[NonSerialized]
	public readonly CutsceneController _cutsceneController;

	[NonSerialized]
	public readonly MainStateManager _mainStateManager;

	[NonSerialized]
	public readonly GameObjectPoolManager _poolManager;

	[NonSerialized]
	public NavigationController _navigationController;

	[NonSerialized]
	public DebrisController _debrisController;

	[NonSerialized]
	public GameConfigClientCache _gameConfigClientCache;

	[NonSerialized]
	public HotspotId _requestedScrollHotspot;

	[NonSerialized]
	public int _completableMergeGoalsAmount;

	[NonSerialized]
	public bool _areaCompletionRewardOpened;

	[NonSerialized]
	public IHotspotDefinition _delayedFocusableHotspot;

	[NonSerialized]
	public IHotspotDefinition _hotspotToFocusAfterCompletion;

	[NonSerialized]
	public IHotspotDefinition _newAreaUnlockHotspotDefinition;

	[NonSerialized]
	public bool _taskCardBeingCompleted;

	[NonSerialized]
	public MetaTime _lastHotspotUpdateTime;

	[NonSerialized]
	public readonly List<HotspotId> _itemsInActiveHotspotIds;

	[NonSerialized]
	public CancellationTokenSource _controllerCancellationTokenSource;

	[NonSerialized]
	public CancellationTokenSource _locationCancellationTokenSource;

	public const float POLL_INTERVAL = 5f;

	public const string HOTSPOT_POOL_TAG = "HotSpotVisual";

	[NonSerialized]
	public UniTask hotspotCompletionUniTask;

	[NonSerialized]
	public IHotspotDefinition hotspotCompletionActiveHotspot;

	[NonSerialized]
	public bool _playerModelListenersAdded;

	[NonSerialized]
	public bool _playerModelWalletListenersAdded;

	[NonSerialized]
	public readonly List<IPlayerReward> _completeTaskExtraSpawnRewards;

	public static HotspotController Instance => null;

	public static bool HasInstance => false;

	public IReadOnlyDictionary<HotspotId, HotspotDefinition> HotspotDefinitions => null;

	public int CompletableMergeGoalsAmount => 0;

	public bool AreaCompletionTimerActive { get; set; }

	public float hotspotAnimationStartRatio => 0f;

	public Vector3 hotspotAnimationItemHighlightScale => default(Vector3);

	public Vector3 hotspotAnimationRewardHighlightScale => default(Vector3);

	public Ease hotspotAnimationEaseMove => default(Ease);

	public Ease hotspotAnimationEaseEnd => default(Ease);

	public float timeShortPause => 0f;

	public bool HotspotCompletionIsActive => false;

	public bool HotspotSkipEnabled => false;

	public bool IsFastForwarding => false;

	public bool HotspotActionsBlocked => false;

	public event HotspotsReadyEvent HotspotsReady
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event HotspotEvent HotspotBecameVisible
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event HotspotEvent HotspotCompleted
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event HotspotEvent OnHotspotCompletionStarted
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event HotspotEvent OnHotspotCompletionEnded
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public float GetHotspotAnimationDuration(bool isFlowV2 = false)
	{
		return 0f;
	}

	public float GetHotspotAnimationItemStartDelay(bool isFlowV2 = false)
	{
		return 0f;
	}

	public float GetHotspotAnimationItemDelay(bool isFlowV2 = false)
	{
		return 0f;
	}

	public float GetHotspotAnimationRewardDelay(bool isFlowV2 = false)
	{
		return 0f;
	}

	public Ease GetHotspotAnimationEaseStart(bool isFlowV2 = false)
	{
		return default(Ease);
	}

	bool IAreaLockedHotspotActions.TryToCompleteHotspot(IHotspotDefinition hotspotDefinition, TaskSource taskSource)
	{
		return false;
	}

	public HotspotController(IInputController inputController, IAnalyticsCollector analyticsCollector, PlayerModel player, IPlayerClientContext playerClientContext, Director director, IBoardController boardController, ISafeRollback rollback, LocationLoader locationLoader, SceneContextMansion sceneContextMansion, MenuController menuController, MessagingController messagingController, IHotspotCamera cameraManager, IMapSpotCamera mapSpotCamera, UnityBoardController unityBoardController, CutsceneController cutsceneController, GameConfigClientCache gameConfigClientCache, MainStateManager mainStateManager, GameObjectPoolManager poolManager, EventsMetaplay eventsMetaplay, ITitleBarInfiniteEnergy titleBarInfiniteEnergy, ITitleBarRewardWidgets titleBarRewardWidgets)
	{
	}

	public void DisposeController()
	{
	}

	public void InitLocation(ISafeRollback locationRollback)
	{
	}

	public void DisposeLocation()
	{
	}

	public void InitializeLocation()
	{
	}

	public void Initialize2(NavigationController navigationController, DebrisController debrisController)
	{
	}

	public void Dispose()
	{
	}

	public void Tick()
	{
	}

	public void UpdateInner()
	{
	}

	public void RefreshRepeatableHotspots()
	{
	}

	[AsyncStateMachine(typeof(_003CPollHotspots_003Ed__115))]
	public UniTask PollHotspots(LocationId locationId, CancellationToken ct)
	{
		return default(UniTask);
	}

	public MapSpotId ConvertToMapSpotId(HotspotId hotspotId)
	{
		return null;
	}

	public MapSpotId ConvertToMapSpotId(string mapSpotIdString)
	{
		return null;
	}

	public void OnBoultonLeagueEventDivisionJoined()
	{
	}

	public void OnBoultonLeagueEventFinalized()
	{
	}

	public void OnDialogueStarted(DialogItemInfo dialogItemInfo)
	{
	}

	public void OnDialogueHidden(DialogItemInfo dialogItemInfo)
	{
	}

	public void OnCutsceneStarted(Cutscene cutscene, bool debug = false)
	{
	}

	public void OnCutsceneEnded(Cutscene cutscene)
	{
	}

	public void OnMergeBoardBecameVisible()
	{
	}

	public void OnMapBecameVisible()
	{
	}

	public void OnMapSpotUIMarkerHidden(MapSpotUIMarker mapSpotUIMarker)
	{
	}

	public void OnMapAreaLoaded(MapArea mapArea)
	{
	}

	public void OnMapAreaUnloading(MapArea mapArea)
	{
	}

	public void OnCurrencyAdded(Currencies currency, long softAmount, long hardAmount, CurrencySource currencySource, int itemId, EventCurrencyId eventCurrencyId, AnalyticsContext context)
	{
	}

	public void OnCurrencyRemoved(Currencies currency, long softAmount, long hardAmount, CurrencySink currencySink, int itemId, EventCurrencyId eventCurrencyId, AnalyticsContext context)
	{
	}

	public void OnItemDiscovered(int discoveredItem)
	{
	}

	public static List<PlayerCurrentTimeRequirement> GetAreaUnlockScheduleTimeRequirementsAscending(IPlayer player)
	{
		return null;
	}

	public static List<(PlayerCurrentTimeRequirement, HotspotId)> GetTaskUnlockScheduleTimeRequirementsAscending(IPlayer player)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CGetNotMetTimeRequirements_003Ed__134))]
	public static IEnumerable<PlayerCurrentTimeRequirement> GetNotMetTimeRequirements(IPlayer player, IEnumerable<IPlayerRequirement> requirements)
	{
		return null;
	}

	public void FetchAllHotspots()
	{
	}

	public void FetchAllMapSpots()
	{
	}

	public void AddMapSpots(MapSpotMarker[] mapSpotMarker)
	{
	}

	public void RemoveMapSpots(MapSpotMarker[] mapSpotMarker)
	{
	}

	public void ReconcileHotspotsForMapSpots(MapSpotMarker[] mapSpotMarkers)
	{
	}

	public void ReconcileEventHotspotsForMapSpots(HashSet<string> mapSpotIds)
	{
	}

	public void RecheckVisibleHotspots()
	{
	}

	public void RecheckIfVisibleHotspotsCanBeCompleted(bool debug = false)
	{
	}

	public void RecheckIfVisibleHotspotCanBeCompleted(HotspotId hotspotId, bool debug = false)
	{
	}

	public void UpdateHotspotCompletionPossibility(HotspotId hotspotId, bool debug = false)
	{
	}

	public void UpdateHotspotCompletionPossibility(HotspotDefinition hotspotDefinition, bool debug = false)
	{
	}

	public void RecheckIfVisibleHotspotsCanBeUnlocked()
	{
	}

	public void UpdateHotspotUnlockingPossibility(HotspotId hotspotId, bool forceReanimate = false)
	{
	}

	public void AreaUnlockHotspotMakeUnlockable(HotspotDefinition hotspotDefinition, MapSpotUIMarker mapSpotUIMarker, bool forceAnimate = false)
	{
	}

	public void FtueMakeFirstAreaUnlockHotspotUnlockable(float startDelay)
	{
	}

	public void RecheckIfTeasedHotspotsCanBeNoted()
	{
	}

	public void UpdateHotspotTeaseNoteStatus(HotspotId hotspotId)
	{
	}

	public bool CheckIfHotspotHasBeenCompleted(HotspotId hotspotId)
	{
		return false;
	}

	public void UpdateRepeatableTasks()
	{
	}

	public void UpdateLocationTravelHotspot()
	{
	}

	public void UpdateIllustrationHeaderTaskHotspots(HotspotId hotspotId, CustomHotspotTableId hotspotTableId)
	{
	}

	public void UpdateIllustrationTaskHotspots(HotspotId hotspotId, CustomHotspotTableId hotspotTableId, bool activate)
	{
	}

	public void UpdateVisibleHotspotsSet()
	{
	}

	public void UpdateCompletedHotspotsSet()
	{
	}

	public void UpdateCurrentAreasSet()
	{
	}

	public void UpdateEventHotspotsSet()
	{
	}

	public void UpdateOpenUIHotspotSet()
	{
	}

	public void RefreshBoardItemEffects()
	{
	}

	public void ProcessAreaUnlockScheduleTimeRequirements()
	{
	}

	public void ProcessTaskUnlockScheduleTimeRequirements()
	{
	}

	public void TryToActivateHotspotsIfRequested()
	{
	}

	public bool TryToDeactivateHotspot(HotspotDefinition hotspotDefinition)
	{
		return false;
	}

	public bool TryToActivateHotspot(HotspotId hotspotId, bool makeActivatedHotspotVisible = true)
	{
		return false;
	}

	public bool TryToActivateHotspot(IHotspotDefinition hotspotDefinition, bool makeActivatedHotspotVisible = true)
	{
		return false;
	}

	public void UpdateHotspotVisuals(HotspotId hotspotId)
	{
	}

	public void AfterHotspotActivated(HotspotId hotspotId, bool makeActivatedHotspotVisible)
	{
	}

	public bool TryToCompleteHotspot(HotspotId hotspotId, TaskSource taskSource)
	{
		return false;
	}

	public bool TryToCompleteHotspot(IHotspotDefinition hotspotDefinition, TaskSource taskSource, List<IPlayerReward> rewards = null, List<Vector3> requirementItemPositions = null, RewardsAnimationsFlags flags = RewardsAnimationsFlags.None, bool giveBonusReward = false, MetaDuration? bonusTimeLeft = null, List<IPlayerReward> difficultyRewards = null, Action onComplete = null)
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CHotspotCompleteProcessInput_003Ed__173))]
	public UniTask HotspotCompleteProcessInput(CancellationToken ct)
	{
		return default(UniTask);
	}

	public void OnCompleteTaskExtraSpawn(IExtraSpawnTrigger trigger, Option<List<(Currencies, long)>> spawnCurrenciesOption, Option<List<(CoreSupportEventTokenId, long)>> spawnTokensOption)
	{
	}

	[AsyncStateMachine(typeof(_003CTryToCompleteHotspotProcess_003Ed__176))]
	public UniTask TryToCompleteHotspotProcess(IHotspotDefinition hotspotDefinition, List<IPlayerReward> rewards, List<Vector3> requirementItemPositions, CancellationToken cancellationToken, TaskSource taskSource, RewardsAnimationsFlags flags = RewardsAnimationsFlags.None, bool giveBonusReward = false, MetaDuration? bonusTimeLeft = null, List<IPlayerReward> difficultyRewards = null, Action onCompleteAction = null)
	{
		return default(UniTask);
	}

	public void DisposeHotspotCompletion()
	{
	}

	public void EndTryToCompleteHotspotProcess(IHotspotDefinition hotspotDefinition)
	{
	}

	public void ShowExtraEffectsOnHotspotCompletion(IPlayerReward reward)
	{
	}

	public SpineRewardItemIndicator InstantiateHotspotReward(SpineRewardItemIndicator prefab, Transform parentTransform, IPlayerReward reward, PlayerModel playerModel, IMenuController menuController, bool isDifficultTask = false)
	{
		return null;
	}

	public SpineInfoItemIndicator InstantiateHotspotRequirement(SpineInfoItemIndicator prefab, Transform parentTransform, IPlayerRequirement requirement, PlayerModel playerModel, IMenuController menuController)
	{
		return null;
	}

	public void ShowLocationTravelConfirmationPopupAfterCompletion(bool isAreaTeaser)
	{
	}

	public bool TryToCompleteHotspotV2(IHotspotDefinition hotspotDefinition, TaskSource taskSource, List<IPlayerReward> rewards = null, List<Vector3> requirementItemPositions = null, RewardsAnimationsFlags flags = RewardsAnimationsFlags.None, bool giveBonusReward = false, MetaDuration? bonusTimeLeft = null, List<IPlayerReward> difficultyRewards = null, Action onComplete = null)
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CTryToCompleteHotspotProcessV2_003Ed__184))]
	public UniTask TryToCompleteHotspotProcessV2(IHotspotDefinition hotspotDefinition, List<IPlayerReward> rewards, List<Vector3> requirementItemPositions, CancellationToken cancellationToken, TaskSource taskSource, RewardsAnimationsFlags flags = RewardsAnimationsFlags.None, bool giveBonusReward = false, MetaDuration? bonusTimeLeft = null, List<IPlayerReward> difficultyRewards = null, Action onCompleteAction = null)
	{
		return default(UniTask);
	}

	public void EndTryToCompleteHotspotProcessV2(IHotspotDefinition hotspotDefinition)
	{
	}

	public void AfterHotspotUncompleted()
	{
	}

	public void CompleteHotspotActions(HotspotDefinition hotspotDefinition)
	{
	}

	public void CompleteHotspotActionsWithoutCameraMovement(HotspotDefinition hotspotDefinition)
	{
	}

	public void ActivateNextHotspots(IHotspotDefinition hotspotDefinition, bool makeActivatedHotspotVisible = true)
	{
	}

	public void CompleteHotspotActionsBeforeCameraMovement(HotspotDefinition hotspotDefinition)
	{
	}

	public void CompleteHotspotActionsAfterCameraMovement(IHotspotDefinition hotspotDefinition)
	{
	}

	public IHotspotDefinition GetHotspotToFocusAfterCompletion(IHotspotDefinition hotspotToComplete)
	{
		return null;
	}

	public IHotspotDefinition GetNewAreaVisibleHotspot(IHotspotDefinition hotspotDefinition)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CAreaCompletionTimer_003Ed__194))]
	public UniTask AreaCompletionTimer(IAreaInfo areaInfo, CancellationToken ct, IHotspotDefinition completeFocusHotspot = null, IWalletState walletState = null, RandomPCG rewardContainerRandom = null)
	{
		return default(UniTask);
	}

	public void OnAreaCompletionRewardMenuClosed(UnityEngine.Object from)
	{
	}

	[AsyncStateMachine(typeof(_003CAreaCompletionRewardClaimedTimer_003Ed__196))]
	public UniTask AreaCompletionRewardClaimedTimer(HotspotId hotspot, CancellationToken ct)
	{
		return default(UniTask);
	}

	public IEnumerable<IHotspotDefinition> GetHotspotsToOpenAfterCompletion(IHotspotDefinition completedHotspot)
	{
		return null;
	}

	public IEnumerable<IHotspotDefinition> GetHotspotsToOpenAfterCompletion(IHotspotDefinition completedHotspot, HashSet<HotspotId> completedHotspots, HashSet<HotspotId> visibleHotspots)
	{
		return null;
	}

	public void UpdateCompletableMergeGoalsAmount()
	{
	}

	public bool IsValid(IHotspotDefinition hotspotDefinition)
	{
		return false;
	}

	public bool IsHotspotVisible(HotspotId hotspotId)
	{
		return false;
	}

	public bool IsHotspotCompletable(HotspotId hotspotId)
	{
		return false;
	}

	public bool IsHotspotCompletable(HotspotId hotspotId, IReadOnlyCollection<IBoard> boards, IEnumerable<IBoardInventory> inventories)
	{
		return false;
	}

	public bool IsActiveMergeGoalItem(int t)
	{
		return false;
	}

	public bool IsActiveMergeGoalItem(int itemId, out int requiredItemCount)
	{
		requiredItemCount = default(int);
		return false;
	}

	public void CheckAreaTeasing()
	{
	}

	public void CheckAreaUnlocking()
	{
	}

	public void ShowAllVisibleHotspots()
	{
	}

	public Transform GetHotspotTooltipPosition(HotspotId hotspotId)
	{
		return null;
	}

	public bool IsHotspotPartOfCurrentLocation(HotspotId hotspotId)
	{
		return false;
	}

	public bool IsHotspotPartOfCurrentLocation(IHotspotDefinition hotspotDefinition)
	{
		return false;
	}

	public void AddNeededItemsIntoItemsInActiveHotspots(HotspotId hotspotId)
	{
	}

	public void AddNeededItemsIntoItemsInActiveHotspots(List<int> items)
	{
	}

	public void RemoveNeededItemsFromItemsInActiveHotspots(IHotspotDefinition hotspotDefinition)
	{
	}

	public void RemoveNeededItemFromItemsInActiveHotspot(List<int> items)
	{
	}

	public void ShowAllActiveEventHotspots()
	{
	}

	public void ShowActiveEventHotspot(string eventId)
	{
	}

	public void CompleteActiveEventHotspot(string eventId)
	{
	}

	public void AddEventHotspot(string eventId, HotspotId hotspotId)
	{
	}

	public void TryRemoveEventHotspot(string eventId)
	{
	}

	public void MakeEventHotspotVisuallyVisible(string eventId, HotspotId hotspotId)
	{
	}

	public void MakeEventHotspotVisuallyHidden(string eventId, HotspotId hotspotId, bool showCompleteEffect)
	{
	}

	public void UpdateEventHotspotStates()
	{
	}

	public void MakeHotspotVisuallyVisible(HotspotId hotspotId)
	{
	}

	public void MakeHotspotVisuallyVisible(IHotspotDefinition hotspotDefinition)
	{
	}

	public void MakeHotspotVisuallyHidden(IHotspotDefinition hotspotDefinition)
	{
	}

	public void MakeHotspotVisuallyCompleted(HotspotId hotspotId, Action onCompleteAction = null)
	{
	}

	public void MakeHotspotVisuallyCompleted(IHotspotDefinition hotspotDefinition, Action onCompleteAction = null, bool animate = true)
	{
	}

	public bool MakeNextMultistepGroupTaskVisible(HotspotId hotspotId, Action onCompleteAction = null, bool animate = true)
	{
		return false;
	}

	public bool MakeNextMultistepGroupTaskVisible(IHotspotDefinition hotspotDefinition, Action onCompleteAction = null, bool animate = true)
	{
		return false;
	}

	public bool MakePreviousMultistepGroupTaskVisible(IHotspotDefinition hotspotDefinition)
	{
		return false;
	}

	public void RequestHideVisibleHotspots(UnityEngine.Object from)
	{
	}

	public void EndRequestHideVisibleHotspots(UnityEngine.Object from)
	{
	}

	public void SetVisibleMapSpotMarkersActive(bool active)
	{
	}

	public void UpdateBannedSearchItems()
	{
	}

	public GameObject GetFromPool()
	{
		return null;
	}

	public void ReturnToPool(GameObject returnThis, bool destroyIfPoolMissing = false)
	{
	}

	public void HandleDelayedHotspotFocus()
	{
	}

	public void ScrollToHotspotIfRequested()
	{
	}

	public bool TryGetHotspotPosition(HotspotId hotspotId, out Vector3 hotspotPosition)
	{
		hotspotPosition = default(Vector3);
		return false;
	}

	public HotspotDefinition GetClosestHotspotInCurrentPosition()
	{
		return null;
	}

	public bool TryGetMapSpotMarker(HotspotId hotspotId, out MapSpotMarker mapSpotMarker)
	{
		mapSpotMarker = null;
		return false;
	}

	public bool TryGetMapSpotMarker(MapSpotInfo mapSpotInfo, out MapSpotMarker mapSpotMarker)
	{
		mapSpotMarker = null;
		return false;
	}

	public bool TryGetMapSpotMarker(string mapSpotId, out MapSpotMarker mapSpotMarker)
	{
		mapSpotMarker = null;
		return false;
	}

	public bool TryGetMapSpotPosition(MapSpotInfo mapSpotInfo, out Vector3 mapSpotMarkerPosition)
	{
		mapSpotMarkerPosition = default(Vector3);
		return false;
	}

	public bool TryGetMapSpotPosition(MapSpotId mapSpotId, out Vector3 mapSpotMarkerPosition)
	{
		mapSpotMarkerPosition = default(Vector3);
		return false;
	}

	public bool TryGetMapSpotPosition(string mapSpotId, out Vector3 mapSpotMarkerPosition)
	{
		mapSpotMarkerPosition = default(Vector3);
		return false;
	}

	public bool TryGetVisibleMapSpotMarker(HotspotId hotspotId, out MapSpotUIMarker mapSpotUIMarker, string eventId = "")
	{
		mapSpotUIMarker = null;
		return false;
	}

	public int GetMapSpotVisibleHotspotCount(MapSpotId mapSpotId)
	{
		return 0;
	}

	public bool TryGetVisibleMapSpotMarker(IHotspotDefinition hotspotDefinition, out MapSpotUIMarker mapSpotUIMarker, string eventId = "")
	{
		mapSpotUIMarker = null;
		return false;
	}

	public bool TryGetVisibleEventMapSpotMarker(MapSpotId mapSpotId, HotspotId hotspotId, out MapSpotUIMarker mapSpotUIMarker, string eventId = "")
	{
		mapSpotUIMarker = null;
		return false;
	}

	public bool TryAddVisibleMapSpotMarker(IHotspotDefinition hotspotDefinition, out MapSpotUIMarker mapSpotUIMarker, string eventId = "")
	{
		mapSpotUIMarker = null;
		return false;
	}

	public Vector2 MapSpotUiMarkerOffset(MapSpotId mapSpotId)
	{
		return default(Vector2);
	}

	public void SetupMapSpotUiMarker(IHotspotDefinition hotspotDefinition, MapSpotUIMarker mapSpotUIMarker, bool animate = false, string eventId = "")
	{
	}

	public bool TryAddVisibleEventMapSpotMarker(MapSpotId mapSpotId, HotspotId hotspotId, out MapSpotUIMarker mapSpotUIMarker, string eventId = "")
	{
		mapSpotUIMarker = null;
		return false;
	}

	public bool TryRemoveVisibleMapSpot(MapSpotId mapSpotId, HotspotId hotspotId, string eventId = "")
	{
		return false;
	}

	public void SetHotspotParentEnabled(bool enabled, bool instant = false)
	{
	}

	public void SetAreaCompletionTimerActive(bool active)
	{
	}

	public void UpdateHotspotBonusTimersIfNeeded()
	{
	}

	public void UpdateHotspotBonusTimer(IHotspotDefinition hotspotDefinition)
	{
	}

	public void ProcessTaskBonusTimer()
	{
	}

	public static List<(MetaTime, HotspotId)> GetTaskBonusTimers(IPlayer player)
	{
		return null;
	}

	public void UpdateUnlockedIncompleteNonTasklistAreas()
	{
	}

	public void ForceActivateHotspotDebug(HotspotId hotspotId, bool makeActivatedHotspotVisible = true)
	{
	}

	public void ForceReActivateHotspotDebug(HotspotId hotspotId)
	{
	}

	public void DebugForceSkipHotspotCompleteProcess()
	{
	}

	[AsyncStateMachine(typeof(_003CDebugForceSkipHotspotCompleteProcessTask_003Ed__269))]
	public UniTask DebugForceSkipHotspotCompleteProcessTask(CancellationToken ct)
	{
		return default(UniTask);
	}

	public bool UncompleteAreaDebug(Option<IAreaInfo> areaInfoOption)
	{
		return false;
	}

	public void UncompleteHotspotDebug(IHotspotDefinition hotspot)
	{
	}

	public bool ForceCompleteHotspot(HotspotId hotspotId, bool moveCamera = true, int flags = 1)
	{
		return false;
	}

	public void DebugLogVisibleMapSpots()
	{
	}

	public void OnHotspotTimerExpired(IHotspotDefinition hotspot)
	{
	}

	public bool TryToCompleteVisibleHotspotInCurrentLocation()
	{
		return false;
	}

	public bool IsDifficultTask(IHotspotDefinition hotspotDefinition)
	{
		return false;
	}

	public IReadOnlyCollection<IAreaInfo> GetCurrentAreas()
	{
		return null;
	}

	public bool TryHandleHotspotCompletionSetupChecks(IHotspotDefinition hotspotDefinition, out Camera cameraComponent)
	{
		cameraComponent = null;
		return false;
	}

	[AsyncStateMachine(typeof(_003CHandleHotspotCompletionVisualMarker_003Ed__279))]
	public UniTask HandleHotspotCompletionVisualMarker(IHotspotDefinition hotspotDefinition, bool boardIsVisible, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CTriggerHotspotCompletionDebrisAnimation_003Ed__280))]
	public UniTask TriggerHotspotCompletionDebrisAnimation(IHotspotDefinition hotspotDefinition, bool boardIsVisible, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	public void TriggerHotspotCompletionVFX(IHotspotDefinition hotspotDefinition, bool boardIsVisible)
	{
	}

	[AsyncStateMachine(typeof(_003CTriggerHotspotCompletionVisualAction_003Ed__282))]
	public UniTask TriggerHotspotCompletionVisualAction(IHotspotDefinition hotspotDefinition, bool boardIsVisible, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CTriggerHotspotCompletionCameraMovement_003Ed__283))]
	public UniTask TriggerHotspotCompletionCameraMovement(IHotspotDefinition hotspotDefinition, CameraZoomTarget cameraZoom, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CTimeShortPauseWithoutFastForward_003Ed__284))]
	public UniTask TimeShortPauseWithoutFastForward(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	public void ChangeVisibleSimultaneousMultitaskMapSpot()
	{
	}

	public bool CanMakeActivatedHotspotVisible(IHotspotDefinition hotspotDefinition)
	{
		return false;
	}

	public bool IsBlockingGroupSibling(IHotspotDefinition hotspotDefinition, IHotspotDefinition comparisonDefinition)
	{
		return false;
	}
}
