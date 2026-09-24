
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c793b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
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
  
  pcVar5 = (char *)(_UNK_01c796c4 + 0x1c793c4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c796c8 + 0x1c793d8));
    func_0x01438628(*(undefined4 *)(_UNK_01c796cc + 0x1c793e4));
    func_0x01438628(*(undefined4 *)(_UNK_01c796d0 + 0x1c793f0));
    func_0x01438628(*(undefined4 *)(_UNK_01c796d4 + 0x1c793fc));
    func_0x01438628(*(undefined4 *)(_UNK_01c796d8 + 0x1c79408));
    func_0x01438628(*(undefined4 *)(_UNK_01c796dc + 0x1c79414));
    func_0x01438628(*(undefined4 *)(_UNK_01c796e0 + 0x1c79420));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xad75,0);
  if (iVar1 == 0) {
    func_0x01c803b0(param_1);
    iVar1 = FUN_01c733a0(param_1);
    iVar7 = FUN_01c733a0(param_1);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x14);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026ae47c(iVar1,(iVar7 + 1) % 4,0);
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026ae538(iVar1,0,0);
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026ae5fc(iVar1,0,0);
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b71ec0(iVar1,**(undefined4 **)(_UNK_01c796e4 + 0x1c7954c));
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b776fc(iVar1,**(undefined4 **)(_UNK_01c796e8 + 0x1c79588));
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b75c84(iVar1,**(undefined4 **)(_UNK_01c796ec + 0x1c795c4));
    *(undefined4 *)(param_1 + 0x44) = 0;
    func_0x014385cc((undefined4 *)(param_1 + 0x44),0);
    if (*(int *)(**(int **)(_UNK_01c796f0 + 0x1c795ec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01c796f4 + 0x1c79608));
    piVar6 = *(int **)(_UNK_01c796f8 + 0x1c7961c);
    iVar7 = *piVar6;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar6;
    }
    iVar8 = **(int **)(_UNK_01c796fc + 0x1c7963c);
    iVar2 = *(int *)(iVar8 + 0x1c);
    uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x2e4);
    if (iVar2 == 0) {
      func_0x014909d8(iVar8);
      iVar2 = *(int *)(iVar8 + 0x1c);
    }
    iVar7 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x0149097c();
    }
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x0149097c();
    }
    uVar4 = **(undefined4 **)(iVar7 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_02990590 + 0x2990434);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02990594 + 0x2990448),uVar9,uVar4,0);
      func_0x01438628(*(undefined4 *)(_UNK_02990598 + 0x2990454));
      func_0x01438628(*(undefined4 *)(_UNK_0299059c + 0x2990460));
      *pcVar5 = '\x01';
    }
    iVar7 = func_0x02953fd4(0x21f,0);
    if (iVar7 == 0) {
      iVar7 = *(int *)(iVar1 + 0x14);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x04753c80(iVar7,uVar9,**(undefined4 **)(_UNK_029905a0 + 0x29904d8));
      uVar3 = 0;
      if (iVar7 != 0) {
        iVar7 = *(int *)(iVar1 + 0x14);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        puVar10 = *(undefined4 **)(_UNK_029905a4 + 0x2990510);
        iVar7 = func_0x0475399c(iVar7,uVar9,*puVar10);
        if (iVar7 != 0) {
          uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_029905a8 + 0x2990528));
          func_0x0298fd74(uVar3,uVar9,uVar4);
          iVar1 = *(int *)(iVar1 + 0x14);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x0475399c(iVar1,uVar9,*puVar10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          (**(code **)(iVar1 + 0xc))
                    (*(undefined4 *)(iVar1 + 0x20),uVar3,*(undefined4 *)(iVar1 + 0x14));
          uVar3 = 1;
        }
      }
    }
    else {
      iVar7 = func_0x029540a4(0x21f,0);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uStack_28 = 0;
      uVar3 = func_0x02871898(iVar7,iVar1,uVar9,uVar4);
    }
    return uVar3;
  }
  iVar1 = func_0x029540a4(0xad75,0);
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
  iVar7 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  uVar9 = func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar4,0,0);
  return uVar9;
}

