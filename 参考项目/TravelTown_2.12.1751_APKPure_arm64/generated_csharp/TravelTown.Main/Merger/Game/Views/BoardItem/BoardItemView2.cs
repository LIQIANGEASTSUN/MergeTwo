using System;
using System.Collections.Generic;
using MergeEngine.ECS.Components.Items;
using Merger.Game.Views.BoardItem.ViewBehaviours;
using Sirenix.Serialization;
using UnityEngine;

namespace Merger.Game.Views.BoardItem
{
	public class BoardItemView2 : BoardItemViewBase, ISerializationCallbackReceiver, ISupportsPrefabSerialization
	{
		[HideInInspector]
		[OdinSerialize]
		[NonSerialized]
		public readonly Dictionary<string, RectTransform> _containers;

		[NonSerialized]
		public IReadOnlyDictionary<string, BehaviourPrefabData> _behaviourConfigs;

		[NonSerialized]
		public readonly Dictionary<Type, IBoardItemViewBehaviour> _behaviours;

		[NonSerialized]
		public readonly HashSet<Type> _persistentBehaviours;

		[NonSerialized]
		public bool _initialised;

		[NonSerialized]
		public bool _resetAnimationState;

		[NonSerialized]
		public string _defaultPoolIdStringFormat;

		[NonSerialized]
		public string _poolIdStringFormat;

		[SerializeField]
		[HideInInspector]
		public SerializationData serializationData;

		public override int SelectorSiblingIndex => 0;

		SerializationData ISupportsPrefabSerialization.SerializationData
		{
			get
			{
				return default(SerializationData);
			}
			set
			{
			}
		}

		public void ShowQuestHintAfterLandAnimationEvent()
		{
		}

		public void OnValidate()
		{
		}

		public override void Initialise(IVisualComponent visualComponent, IReadOnlyDictionary<string, BehaviourPrefabData> behaviourConfigs, string poolIdStringFormat = null)
		{
		}

		public override void Dispose()
		{
		}

		public void RegisterExistingBoardItemViewBehaviours()
		{
		}

		public override void PointerClicked()
		{
		}

		public override TViewBehaviour GetBehaviour<TViewBehaviour>()
		{
			return null;
		}

		public override TViewBehaviour GetOrAttachBehaviour<TViewBehaviour>()
		{
			return null;
		}

		public bool HasBehaviour<TViewBehaviour>() where TViewBehaviour : class, IBoardItemViewBehaviour
		{
			return false;
		}

		public TViewBehaviour AttachBehaviour<TViewBehaviour>(bool notifyBehaviours = false) where TViewBehaviour : class, IBoardItemViewBehaviour
		{
			return null;
		}

		public void MarkResetAnimationState()
		{
		}

		public TViewBehaviour AttachBehaviourFromPrefab<TViewBehaviour>(GameObject prefab, RectTransform container) where TViewBehaviour : class, IBoardItemViewBehaviour
		{
			return null;
		}

		public TViewBehaviour AttachBehaviourFromPool<TViewBehaviour>(string poolName, RectTransform container) where TViewBehaviour : class, IBoardItemViewBehaviour
		{
			return null;
		}

		public void RegisterBehaviour(IBoardItemViewBehaviour behaviour, Type behaviourType, bool isPersistent, bool initialize = true)
		{
		}

		public void RemoveBehaviour(IBoardItemViewBehaviour viewBehaviour, Type behaviourType, bool dispose = true)
		{
		}

		public void TryResetAnimation()
		{
		}

		public override void OnEnable()
		{
		}

		public void WipeBehaviours()
		{
		}

		public RectTransform GetContainer(string containerId)
		{
			return null;
		}

		public void NotifyBehaviourAdded()
		{
		}

		void ISerializationCallbackReceiver.OnAfterDeserialize()
		{
		}

		void ISerializationCallbackReceiver.OnBeforeSerialize()
		{
		}
	}
}
