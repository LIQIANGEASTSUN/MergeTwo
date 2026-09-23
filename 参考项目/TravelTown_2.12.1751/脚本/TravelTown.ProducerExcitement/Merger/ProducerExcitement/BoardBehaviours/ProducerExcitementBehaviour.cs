using System;
using Framework.Core.View.ReactiveComponents;
using Merger.Game.Views.BoardItem.ViewBehaviours;
using Merger.ProducerExcitement.Compatibility;
using Merger.ProducerExcitement.ViewModels;
using UnityEngine;
using strange.extensions.promise.api;

namespace Merger.ProducerExcitement.BoardBehaviours
{
	public class ProducerExcitementBehaviour : BoardItemViewBehaviourBase<ProducerExcitementBehaviourViewModel>, IProducerExcitementViewBehaviour, IBoardItemViewBehaviour
	{
		[SerializeField]
		public AddressableImage _excitementImage;

		[SerializeField]
		public AddressableImage _boardItemImage;

		[Header("Animation")]
		[SerializeField]
		public AnimationGraphPlayer _animationGraphPlayer;

		[SerializeField]
		public string _dropAnimationName;

		[SerializeField]
		public string _initAnimationName;

		[SerializeField]
		public string _resetAnimationName;

		[Header("Animation properties")]
		[SerializeField]
		public string _startParticlePositionPropertyName;

		[SerializeField]
		public string _endParticlePositionPropertyName;

		[SerializeField]
		public string _jumpContainerPropertyName;

		[SerializeField]
		public string _crossPointPropertyName;

		[SerializeField]
		public float _curveLength;

		[NonSerialized]
		public bool _inTransitionFailed;

		[NonSerialized]
		public Vector3 _endAnimationPosition;

		public override void OnInitialize()
		{
		}

		public void OnEnable()
		{
		}

		public override void OnUpdate()
		{
		}

		public IPromise TransitionIn()
		{
			return null;
		}

		public Vector3 GetCrossPoint(Vector3 startAnimationPosition)
		{
			return default(Vector3);
		}

		public void InitAnimation()
		{
		}

		public void LoadBoardItemSprite()
		{
		}

		public void SetupExcitementImage()
		{
		}

		public void TransitionInFailed(Exception exception)
		{
		}
	}
}
