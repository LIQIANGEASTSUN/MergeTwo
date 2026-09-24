
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_ItemMover_InteractWithBoardSlot_0x02C0594C(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 uVar10;
  
  puVar1 = PTR_DAT_063f0f18;
  if ((bRam0000000006812baa & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f9ed8);
    func_0x02ad6de0(PTR_DAT_063f0f18);
    bRam0000000006812baa = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    func_0x02ad6f5c();
  }
  uVar2 = func_0x05c465f8(param_2,0,0);
  if ((uVar2 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      func_0x02ad6f5c();
    }
    uVar2 = func_0x05c465f8(param_2,uVar8,0);
    if ((uVar2 & 1) == 0) {
      if (param_2 == 0) goto LAB_02d05b74;
      if ((*(char *)(param_2 + 0x2c) != '\0') && (*(char *)(param_2 + 0x2d) == '\0')) {
        uVar2 = Recovered_BoardSlot_get_IsEmpty_0x2b9e508(param_2,0);
        if ((uVar2 & 1) != 0) {
          plVar9 = *(long **)(param_1 + 0x10);
          if (plVar9 == (long *)0x0) goto LAB_02d05b74;
          lVar6 = *plVar9;
          uVar8 = *(undefined8 *)(param_1 + 0x50);
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_063f9ed8) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                goto LAB_02d05b48;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)func_0x02b0e364(plVar9,*(long *)PTR_DAT_063f9ed8,7);
LAB_02d05b48:
          (*(code *)*puVar3)(plVar9,uVar8,param_2,puVar3[1]);
          lVar6 = *(long *)(param_1 + 0x58);
          uVar10 = _UNK_01183650;
          goto LAB_02d05a08;
        }
        plVar9 = *(long **)(param_1 + 0x58);
        if (plVar9 == (long *)0x0) {
LAB_02d05b74:
                    /* WARNING: Subroutine does not return */
          NullReferenceThrowHelper();
        }
        lVar6 = *(long *)(param_2 + 0x30);
        uVar2 = (**(code **)(*plVar9 + 0x268))(plVar9,lVar6,*(undefined8 *)(*plVar9 + 0x270));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x28) != 0) {
            Recovered_ItemMerger_Merge_0x02C033A0
                      (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x58),lVar6,
                       *(undefined8 *)(param_1 + 0x50),param_2);
            return;
          }
          goto LAB_02d05b74;
        }
        if (lVar6 == 0) goto LAB_02d05b74;
        if (*(char *)(lVar6 + 0x40) == '\0') {
          lVar5 = *(long *)(param_1 + 0x50);
          if (lVar5 != 0) {
            lVar4 = *(long *)(param_1 + 0x10);
            *(undefined1 *)(lVar5 + 0x2c) = 0;
            *(undefined1 *)(param_2 + 0x2c) = 0;
            if (lVar4 != 0) {
              func_0x027a98d8(7,*(undefined8 *)PTR_DAT_063f9ed8,lVar4,lVar5,param_2);
              uVar10 = _UNK_01183650;
              Recovered_ItemMover_MoveItemToBoardSlot_0x02C067F0
                        (_UNK_01183650,param_1,*(undefined8 *)(param_1 + 0x58),param_2);
              param_2 = *(long *)(param_1 + 0x50);
              goto LAB_02d05a08;
            }
          }
          goto LAB_02d05b74;
        }
      }
    }
  }
  param_2 = *(long *)(param_1 + 0x50);
  lVar6 = *(long *)(param_1 + 0x58);
  uVar10 = _UNK_01183650;
LAB_02d05a08:
  Recovered_ItemMover_MoveItemToBoardSlot_0x02C067F0(uVar10,param_1,lVar6,param_2);
  return;
}

