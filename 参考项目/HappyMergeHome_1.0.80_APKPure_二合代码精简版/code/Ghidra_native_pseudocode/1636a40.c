
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01646a40(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
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
  
  pcVar2 = (char *)(_UNK_01646e10 + 0x1646a50);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01646e14 + 0x1646a64));
    func_0x01438628(*(undefined4 *)(_UNK_01646e18 + 0x1646a70));
    func_0x01438628(*(undefined4 *)(_UNK_01646e1c + 0x1646a7c));
    func_0x01438628(*(undefined4 *)(_UNK_01646e20 + 0x1646a88));
    func_0x01438628(*(undefined4 *)(_UNK_01646e24 + 0x1646a94));
    func_0x01438628(*(undefined4 *)(_UNK_01646e28 + 0x1646aa0));
    func_0x01438628(*(undefined4 *)(_UNK_01646e2c + 0x1646aac));
    func_0x01438628(*(undefined4 *)(_UNK_01646e30 + 0x1646ab8));
    func_0x01438628(*(undefined4 *)(_UNK_01646e34 + 0x1646ac4));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1673,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1673,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar8,uVar5,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar6 = *(int **)(_UNK_01646e38 + 0x1646b18);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_0163b7ec();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_01644390(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0163b7ec();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0163bb3c(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_01646e3c + 0x1646b98) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_0163b7ec();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_01642704(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ceba0(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_01646e40 + 0x1646c20) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01646e44 + 0x1646c3c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_01646e48 + 0x1646c5c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          puVar4 = *(undefined4 **)(_UNK_01646e50 + 0x1646cd8);
          func_0x024f05a8(0,0x55,*puVar4);
          func_0x014388e4();
          func_0x024f05a8(0,0x56,*puVar4);
          func_0x014388e4();
          func_0x024f05a8(0,0x57,*puVar4);
          func_0x014388e4();
        }
        else {
          puVar4 = *(undefined4 **)(_UNK_01646e4c + 0x1646c94);
          func_0x024f05a8(iVar1,0x55,*puVar4);
          func_0x024f05a8(iVar1,0x56,*puVar4);
          func_0x024f05a8(iVar1,0x57,*puVar4);
        }
        func_0x024f05a8(iVar1,0x58,**(undefined4 **)(_UNK_01646e54 + 0x1646d18));
        if (*(int *)(**(int **)(_UNK_01646e58 + 0x1646d2c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01646e5c + 0x1646d48));
        piVar6 = (int *)FUN_0163b7ec();
        if (piVar6 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar6 + 0x198))(piVar6,*(undefined4 *)(*piVar6 + 0x19c));
        iVar7 = **(int **)(_UNK_01646e60 + 0x1646d88);
        iVar8 = *(int *)(iVar7 + 0x1c);
        if (iVar8 == 0) {
          func_0x014909d8(iVar7);
          iVar8 = *(int *)(iVar7 + 0x1c);
        }
        iVar8 = *(int *)(iVar8 + 8);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x0149097c();
        }
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x0149097c();
        }
        uVar5 = **(undefined4 **)(iVar8 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar1,uVar3,uVar5,0);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

