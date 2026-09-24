using System;
using Framework.Core.Services.DataRouter;
using Zenject;

namespace Framework.Core
{
	public class Base
	{
		[Inject]
		[NonSerialized]
		public IDataRouterService _dataRouterService;

		[NonSerialized]
		public bool _disposed;

		[NonSerialized]
		public SignalBus _signalBus;

		[Inject]
		public SignalBus SignalBus
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public virtual void SubscribeToSignals()
		{
		}

		public virtual void UnsubscribeFromSignals()
		{
		}

		public void SubscribeToSignal<TSignal>(Action<TSignal> listener)
		{
		}

		public void SubscribeToSignal<TSignal>(Action listener)
		{
		}

		public void UnsubscribeFromSignal<TSignal>(Action<TSignal> listener)
		{
		}

		public void UnsubscribeFromSignal<TSignal>(Action listener)
		{
		}

		public void FireSignal<TSignal>()
		{
		}

		public void FireSignal<TSignal>(TSignal signal)
		{
		}

		public void TryFireSignal<TSignal>(TSignal signal)
		{
		}

		public void Dispose()
		{
		}

		public virtual void HandleDisposed()
		{
		}

		public void Subscribe<T>(Action<T> listener)
		{
		}

		public void Unsubscribe<T>(Action<T> listener)
		{
		}

		public void Publish<T>(T data)
		{
		}
	}
}
