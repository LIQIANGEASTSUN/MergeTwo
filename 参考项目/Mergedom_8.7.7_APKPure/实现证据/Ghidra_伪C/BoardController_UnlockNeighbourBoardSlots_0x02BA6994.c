
void Recovered_BoardController_UnlockNeighbourBoardSlots_0x02BA6994(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    iVar2 = *(int *)(param_2 + 0x24);
    Recovered_BoardController__UnlockNeighbourBoardSlots_g__UnlockNeighbour_41_0_0x2ba69fc
              (param_1,iVar1 + 1,iVar2);
    Recovered_BoardController__UnlockNeighbourBoardSlots_g__UnlockNeighbour_41_0_0x2ba69fc
              (param_1,iVar1 + -1,iVar2);
    Recovered_BoardController__UnlockNeighbourBoardSlots_g__UnlockNeighbour_41_0_0x2ba69fc
              (param_1,iVar1,iVar2 + 1);
    Recovered_BoardController__UnlockNeighbourBoardSlots_g__UnlockNeighbour_41_0_0x2ba69fc
              (param_1,iVar1,iVar2 + -1);
    if (*(long *)(param_1 + 0x30) != 0) {
      Recovered_BoardHintChecker_CheckForMergeHint_0x02B9DD90();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

