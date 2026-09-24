
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba4bfc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_02ba4ecc + 0x2ba4c14);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba4ed0 + 0x2ba4c28));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4ed4 + 0x2ba4c34));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4ed8 + 0x2ba4c40));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4edc + 0x2ba4c4c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4ee0 + 0x2ba4c58));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4ee4 + 0x2ba4c64));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xfe2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xfe2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar8 = *(int **)(_UNK_02ba4ee8 + 0x2ba4cc0);
  iVar1 = **(int **)(*piVar8 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b63a9c(iVar1,0x191,0,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02ba4eec + 0x2ba4cfc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba4ef0 + 0x2ba4d18));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029ca78c(iVar1,0);
    if (2 < iVar1) {
      piVar5 = *(int **)(_UNK_02ba4ef4 + 0x2ba4d4c);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar7 = *(undefined4 **)(_UNK_02ba4ef8 + 0x2ba4d68);
      iVar1 = func_0x014e9518(*puVar7);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02bddd68(iVar1,0,0);
      if (iVar1 != 0) {
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar7);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02bdec74(iVar1,0,0);
        if (iVar1 == 0) {
          piVar5 = *(int **)(_UNK_02ba4efc + 0x2ba4de4);
          iVar1 = **(int **)(*piVar8 + 0x5c);
          iVar3 = **(int **)(*piVar5 + 0x5c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x38);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar6 = func_0x024eecb8(iVar3,0);
          iVar3 = **(int **)(*piVar5 + 0x5c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x38);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uStack_20 = func_0x024eecb8(iVar3,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_24 = 1;
          uStack_28 = 0;
          uStack_1c = 0;
          func_0x02b63f30(iVar1,0x191,uVar6,0);
          iVar1 = **(int **)(*piVar8 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_28 = 0;
          func_0x02b6127c(iVar1,0x191,0,0);
        }
      }
    }
  }
  return;
}

