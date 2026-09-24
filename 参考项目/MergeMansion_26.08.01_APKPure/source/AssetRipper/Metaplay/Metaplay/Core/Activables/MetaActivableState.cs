using System.Runtime.Serialization;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Player;
using Metaplay.Core.Serialization;

namespace Metaplay.Core.Activables
{
	[MetaSerializable]
	public abstract class MetaActivableState : MetaActivableStateStorage
	{
		[MetaSerializable]
		[MetaBlockedMembers(new int[] { 4 })]
		public struct Activation
		{
			[MetaMember(1, MetaMemberFlags.None)]
			public MetaDuration UtcOffset;

			[MetaMember(2, MetaMemberFlags.None)]
			public MetaTime StartedAt;

			[MetaMember(3, MetaMemberFlags.None)]
			public MetaTime? EndAt;

			[MetaMember(8, MetaMemberFlags.None)]
			public bool EndedExplicitly;

			[MetaMember(6, MetaMemberFlags.None)]
			public MetaTime? CooldownEndAt;

			[MetaMember(5, MetaMemberFlags.None)]
			public int NumConsumed;

			[MetaMember(7, MetaMemberFlags.None)]
			public bool IsFinalized;

			[IgnoreDataMember]
			public PlayerLocalTime LocalStartedAt => default(PlayerLocalTime);

			public Activation(MetaDuration utcOffset, MetaTime startedAt, MetaTime? endAt, bool endedExplicitly, MetaTime? cooldownEndAt, int numConsumed, bool isFinalized)
			{
				UtcOffset = default(MetaDuration);
				StartedAt = default(MetaTime);
				EndAt = null;
				EndedExplicitly = false;
				CooldownEndAt = null;
				NumConsumed = 0;
				IsFinalized = false;
			}
		}

		[MetaSerializable]
		public class DebugState
		{
			[MetaMember(1, MetaMemberFlags.None)]
			public DebugPhase Phase { get; set; }

			public DebugState()
			{
			}

			public DebugState(DebugPhase phase)
			{
			}
		}

		[MetaSerializable]
		public enum DebugPhase
		{
			Preview = 0,
			Active = 1,
			EndingSoon = 2,
			Review = 3,
			Inactive = 4
		}

		public delegate void ActionRef<T>(ref T value);

		[IgnoreDataMember]
		public abstract MetaActivableParams ActivableParams { get; }

		public virtual bool IsValidState => false;

		public bool CanStartActivation(IPlayerModelBase player)
		{
			return false;
		}

		public bool CanStartActivationAt(IPlayerModelBase player, MetaTime time)
		{
			return false;
		}

		public bool TryStartActivation(IPlayerModelBase player)
		{
			return false;
		}

		public void ForceStartActivation(IPlayerModelBase player)
		{
		}

		public void ForceStartDebugEndlessActivation(IPlayerModelBase player)
		{
		}

		public bool HasOngoingActivation(MetaTime currentTime)
		{
			return false;
		}

		public bool IsActive(IPlayerModelBase player)
		{
			return false;
		}

		public virtual bool AllowConsume(IPlayerModelBase player)
		{
			return false;
		}

		public virtual MetaTime? GetActivationEndingSoonStartsAtTime(IPlayerModelBase player)
		{
			return null;
		}

		public virtual MetaTime? GetActivationVisibilityEndsAtTime(IPlayerModelBase player)
		{
			return null;
		}

		public virtual bool IsInReview(MetaTime currentTime)
		{
			return false;
		}

		public bool TryConsume(IPlayerModelBase player)
		{
			return false;
		}

		public void ForceConsume(IPlayerModelBase player)
		{
		}

		public void ForceEndActivation(IPlayerModelBase player, bool skipCooldown = false)
		{
		}

		public bool TryAdjustActivation(IPlayerModelBase player)
		{
			return false;
		}

		public virtual MetaTime? GetAdjustedActivationEndTime(IPlayerModelBase player)
		{
			return null;
		}

		public bool TryFinalize(IPlayerModelBase player)
		{
			return false;
		}

		public virtual bool CanBeFinalized(IPlayerModelBase player)
		{
			return false;
		}

		public bool IsInCooldown(MetaTime currentTime)
		{
			return false;
		}

		public bool TotalLimitsAreReached()
		{
			return false;
		}

		public bool IsScheduleOffsetBlocked(PlayerLocalTime currentTime)
		{
			return false;
		}

		public MetaDuration GetUtcOffsetForActivation(MetaDuration playerLocalUtcOffset)
		{
			return default(MetaDuration);
		}

		public void MutateLatestActivation(ActionRef<Activation> mutate)
		{
		}

		public void TryInvokeOnActivationStartedListener(IPlayerModelBase player)
		{
		}

		public void TryInvokeOnConsumedListener(IPlayerModelBase player)
		{
		}

		public void TryInvokeOnFinalizedListener(IPlayerModelBase player)
		{
		}

		public abstract object TryGetActivableId();

		public virtual bool CustomCanStartActivation(IPlayerModelBase player, MetaTime time)
		{
			return false;
		}

		public virtual void OnStartedActivation(IPlayerModelBase player)
		{
		}

		public virtual void Finalize(IPlayerModelBase player)
		{
		}

		public MetaActivableState()
		{
		}
	}
	public abstract class MetaActivableState<TId> : MetaActivableState
	{
		[IgnoreDataMember]
		public abstract TId ActivableId { get; }

		public override object TryGetActivableId()
		{
			return null;
		}

		public MetaActivableState()
		{
		}
	}
	public abstract class MetaActivableState<TId, TInfo> : MetaActivableState where TInfo : class, IGameConfigData<TId>, IMetaActivableInfo<TId>
	{
		[IgnoreDataMember]
		public abstract TId ActivableId { get; set; }

		[IgnoreDataMember]
		public TInfo ActivableInfo { get; set; }

		[IgnoreDataMember]
		public override MetaActivableParams ActivableParams => null;

		public override bool IsValidState => false;

		public override object TryGetActivableId()
		{
			return null;
		}

		public MetaActivableState()
		{
		}

		public MetaActivableState(TInfo activableInfo)
		{
		}

		[MetaOnDeserialized]
		public void TryResolveInfo(MetaOnDeserializedParams par)
		{
		}
	}
}
