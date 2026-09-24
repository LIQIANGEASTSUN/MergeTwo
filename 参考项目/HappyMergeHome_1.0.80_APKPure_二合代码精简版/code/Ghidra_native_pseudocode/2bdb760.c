
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02beb760(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_02beb8cc + 0x2beb774);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02beb8d0 + 0x2beb788));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5b46,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5b46,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar5 = *(int *)(param_1 + 0x44);
  iVar1 = 0;
  if (iVar5 != 0) {
    iVar1 = *(int *)(iVar5 + 0xc);
  }
  if ((iVar5 != 0 && iVar1 != 0) && (uVar2 = *(uint *)(iVar5 + 0xc), 0 < (int)uVar2)) {
    uVar8 = 0;
    piVar9 = *(int **)(_UNK_02beb8d4 + 0x2beb80c);
    do {
      if (uVar2 <= uVar8) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar5 + 0x10 + uVar8 * 4);
      if (iVar1 != 0) {
        uVar7 = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x024ef144(uVar7,0,0);
        if (iVar3 != 0) {
          iVar3 = *(int *)(iVar1 + 0xc);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x014e94d8(iVar3,0);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x024ef144(uVar7,0,0);
          if (iVar3 != 0) {
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x02c1c2ec(iVar1,0);
          }
        }
      }
      uVar2 = *(uint *)(iVar5 + 0xc);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar2);
  }
  return;
}

