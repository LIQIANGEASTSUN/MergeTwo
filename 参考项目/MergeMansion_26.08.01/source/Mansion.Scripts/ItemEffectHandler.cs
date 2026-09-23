using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Code.GameLogic.GameEvents;
using GameLogic.Player;
using GameLogic.Player.Items;
using Merge;
using Spine;
using UnityEngine;

public class ItemEffectHandler
{
	[CompilerGenerated]
	public sealed class _003CStartPlaybackAfterDelay_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public float startDelay;

		public ItemEffectHandler _003C_003E4__this;

		public bool removeAfterPlayback;

		object IEnumerator<object>.Current
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
		public _003CStartPlaybackAfterDelay_003Ed__36(int _003C_003E1__state)
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

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	public GameObject gameObject;

	public ItemEffect itemEffect;

	[NonSerialized]
	public SpineHandler itemEffectSpineHandler;

	[NonSerialized]
	public AnimationRunner itemEffectAnimationRunner;

	[NonSerialized]
	public IItemEffectUIObject itemEffectUIObject;

	[NonSerialized]
	public IItemEffectParticleSystemObject itemEffectParticleSystemObject;

	[NonSerialized]
	public Coroutine itemEffectCoroutine;

	[NonSerialized]
	public Action callAfterRemove;

	[NonSerialized]
	public ItemEffectState state;

	[NonSerialized]
	public ParticleSystem actionParticleEffect;

	[NonSerialized]
	public string particlePoolTag;

	public static readonly string playCommand;

	public static readonly string stopCommand;

	[NonSerialized]
	public int relativePos;

	public SpineHandler SpineHandler => null;

	public void CompleteAnimationEvent(TrackEntry trackEntry)
	{
	}

	public void SetTimeScale(float timeScale)
	{
	}

	public void DisableMix(string animation)
	{
	}

	public void SetAnimationToRelativePosition(string animationName, string trackName, float relativePosition)
	{
	}

	public void SetUIObjectBoardItemHandler(BoardItemHandler boardItemHandler)
	{
	}

	public void SetUIObjectValue(float value)
	{
	}

	public void SetUIObjectUpdateStatus(bool ignoreUpdates)
	{
	}

	public void SetUIObjectPreviewValue(float value)
	{
	}

	public void SetUIObjectMinLevel(int level)
	{
	}

	public void SetUIObjectLevel(int level)
	{
	}

	public void SetCoreSupportEventTokenIcon(IPlayer player, CoreSupportEventTokenId tokenId)
	{
	}

	public void SetBoolValue(bool value)
	{
	}

	public void SetLimitedItemCount(IItemDefinition itemDefinition, int count, int limit)
	{
	}

	public void PassMergeItem(MergeItem mergeItem, BoardItemHandler boardItemHandler, object context = null)
	{
	}

	public void StartParticlesPlayback(float startDelay = 0f, Action callOnStart = null, Action callOnStop = null, float playbackSpeed = 1f)
	{
	}

	public void StopParticlesPlayback(Action callOnStop = null)
	{
	}

	public void SetEmptyAnimations()
	{
	}

	public bool IsPlaying()
	{
		return false;
	}

	public bool IsStopping()
	{
		return false;
	}

	public void StartPlayback(bool removeAfterPlayback = false, Action callAfterRemove = null, float startDelay = 0f)
	{
	}

	[IteratorStateMachine(typeof(_003CStartPlaybackAfterDelay_003Ed__36))]
	public IEnumerator StartPlaybackAfterDelay(float startDelay, bool removeAfterPlayback)
	{
		return null;
	}

	public void StopPlayback(Action callAfterRemove = null)
	{
	}

	public void PlayParticleEffect()
	{
	}

	public void InstantiateEffect(ItemEffect itemEffect, Transform parent)
	{
	}

	public void InstantiateParticleEffect(string poolTag, Transform parent)
	{
	}

	public void AdjustEffectPositionByType(ItemEffect itemEffect, GameObject instantiatedObject)
	{
	}

	public void ResetAndReturnToPool()
	{
	}

	public void ReturnParticleToPool()
	{
	}
}
