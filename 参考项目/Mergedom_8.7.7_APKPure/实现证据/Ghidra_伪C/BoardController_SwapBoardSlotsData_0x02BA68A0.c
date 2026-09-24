
void Recovered_BoardController_SwapBoardSlotsData_0x02BA68A0
               (undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = *(undefined1 *)(param_2 + 0x2c);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined1 *)(param_2 + 0x2d);
    uVar3 = *(undefined8 *)(param_3 + 0x30);
    *(undefined1 *)(param_2 + 0x2d) = *(undefined1 *)(param_3 + 0x2d);
    Recovered_BoardSlot_SetItem_0x02B9F90C(param_2,uVar3,0);
    *(undefined1 *)(param_3 + 0x2d) = uVar2;
    *(undefined1 *)(param_2 + 0x2c) = *(undefined1 *)(param_3 + 0x2c);
    Recovered_BoardSlot_SetItem_0x02B9F90C(param_3,uVar4,0);
    *(undefined1 *)(param_3 + 0x2c) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

