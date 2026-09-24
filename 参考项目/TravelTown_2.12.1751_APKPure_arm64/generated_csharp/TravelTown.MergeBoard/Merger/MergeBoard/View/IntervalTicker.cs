using System;
using Framework.Core.Services.ServerTime;
using Merger.MergeBoard.Controller;
using Merger.MergeBoard.Models;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoard.View
{
	public class IntervalTicker : MonoBehaviour
	{
		[Inject]
		[NonSerialized]
		public ITimeIntervalProcessor _intervalProcessor;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public IMergeBoardModel _mergeBoardModel;

		[SerializeField]
		public float _interval;

		[NonSerialized]
		public float _lastDeltaTime;

		public long CurrentServerTimeMS => 0L;

		public void Start()
		{
		}

		public void Update()
		{
		}
	}
}
