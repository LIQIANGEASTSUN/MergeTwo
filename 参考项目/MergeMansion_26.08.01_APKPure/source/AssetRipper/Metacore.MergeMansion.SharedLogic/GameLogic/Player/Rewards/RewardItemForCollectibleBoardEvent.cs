using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Player.Items;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Config;
using Metaplay.Core.Forms;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(42)]
	public class RewardItemForCollectibleBoardEvent : PlayerReward
	{
		[CompilerGenerated]
		public sealed class _003CGetEventIds_003Ed__51 : IEnumerable<CollectibleBoardEventId>, IEnumerable, IEnumerator<CollectibleBoardEventId>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public CollectibleBoardEventId _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public RewardItemForCollectibleBoardEvent _003C_003E4__this;

			[NonSerialized]
			public List<CollectibleBoardEventId>.Enumerator _003C_003E7__wrap1;

			CollectibleBoardEventId IEnumerator<CollectibleBoardEventId>.Current
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
			public _003CGetEventIds_003Ed__51(int _003C_003E1__state)
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
			IEnumerator<CollectibleBoardEventId> IEnumerable<CollectibleBoardEventId>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CResolveEvents_003Ed__52 : IEnumerable<CollectibleBoardEventModel>, IEnumerable, IEnumerator<CollectibleBoardEventModel>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public CollectibleBoardEventModel _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			public RewardItemForCollectibleBoardEvent _003C_003E4__this;

			[NonSerialized]
			public IEnumerator<CollectibleBoardEventModel> _003C_003E7__wrap1;

			[NonSerialized]
			public CollectibleBoardEventModel _003CactiveEvent_003E5__3;

			[NonSerialized]
			public IEnumerator<CollectibleBoardEventId> _003C_003E7__wrap3;

			CollectibleBoardEventModel IEnumerator<CollectibleBoardEventModel>.Current
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
			public _003CResolveEvents_003Ed__52(int _003C_003E1__state)
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

			public void _003C_003Em__Finally2()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<CollectibleBoardEventModel> IEnumerable<CollectibleBoardEventModel>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[ValidateItemDefMetaMember]
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef ItemDef { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Amount { get; set; }

		[MetaFormNotEditable]
		[MetaMember(3, MetaMemberFlags.None)]
		public bool FromSupport { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public CollectibleBoardEventId EventId_DEPRECATED { get; set; }

		[IgnoreDataMember]
		public Option<CollectibleBoardEventId> EventIdOption_DEPRECATED => default(Option<CollectibleBoardEventId>);

		[MetaFormNotEditable]
		[MetaMember(5, MetaMemberFlags.None)]
		public OverrideItemFeatures OverrideItemFeatures { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public bool ForceOnTopOfPocket { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public string OverridePoolTag { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public List<CollectibleBoardEventId> EventIds { get; set; }

		[IgnoreDataMember]
		public Option<List<CollectibleBoardEventId>> EventIdsOption => default(Option<List<CollectibleBoardEventId>>);

		[IgnoreDataMember]
		public override bool ShouldShowInfoButton => false;

		public IItemDefinition GetItem(IMergeMansionGameConfig config)
		{
			return null;
		}

		public string GetPoolTag(IMergeMansionGameConfig config)
		{
			return null;
		}

		public RewardItemForCollectibleBoardEvent()
		{
		}

		public RewardItemForCollectibleBoardEvent(List<CollectibleBoardEventId> eventIds, int itemId, int amount, bool fromSupport, CurrencySource currencySource, OverrideItemFeatures overrideItemFeatures, bool forceOnTopOfPocket = false, string overridePoolTag = null)
		{
		}

		public RewardItemForCollectibleBoardEvent(List<CollectibleBoardEventId> eventIds, ItemDef itemDef, int amount, bool fromSupport, CurrencySource currencySource, OverrideItemFeatures overrideItemFeatures = null, bool forceOnTopOfPocket = false, string overridePoolTag = null)
		{
		}

		public override void Consume(IPlayer playerModel, AnalyticsContext context, IRewardContext rewardContext)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public override string GetAmountString(int? value)
		{
			return null;
		}

		public override string GetAmountString(int? value, bool isPlusSigned)
		{
			return null;
		}

		public override string Name(IPlayer player)
		{
			return null;
		}

		public override string TypeString()
		{
			return null;
		}

		public override string ToString()
		{
			return null;
		}

		public RewardItem AsRewardItem(Option<IPlayer> playerOption)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetEventIds_003Ed__51))]
		public IEnumerable<CollectibleBoardEventId> GetEventIds()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CResolveEvents_003Ed__52))]
		public IEnumerable<CollectibleBoardEventModel> ResolveEvents(IPlayer player)
		{
			return null;
		}

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
