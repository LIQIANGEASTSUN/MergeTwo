
void Recovered_BoardController_OnPostMerge_0x02BA8630
               (undefined1 param_1 [16],undefined1 param_2 [16],long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_4 + 0x20);
  Recovered_BoardController_UnlockNeighbourBoardSlots_0x02BA6994(param_3,lVar1);
  *(undefined8 *)(param_3 + 0xa8) = 0;
  func_0x02ad6d8c((undefined8 *)(param_3 + 0xa8),0);
  func_0x02ca6414(param_3,lVar1);
  if ((*(byte *)(param_4 + 0x30) & 1) == 0) {
    return;
  }
  if (lVar1 != 0) {
    auVar2 = func_0x02c9f8bc(lVar1);
    func_0x02ca86a0(auVar2,param_2,0,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

