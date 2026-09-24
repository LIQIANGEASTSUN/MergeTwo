using Framework.Core.Services.Backend.Data;

namespace Merger.Services.Backend.WebSocket.Interfaces
{
	public interface IChannelListener
	{
		string ChannelName { get; }

		void HandleMessage(BackendMessageNotification message);
	}
}
