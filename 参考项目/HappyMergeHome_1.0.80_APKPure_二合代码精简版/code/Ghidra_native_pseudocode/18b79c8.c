
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018c79c8(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
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
  
  pcVar2 = (char *)(_UNK_018c7d14 + 0x18c79d8);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c7d18 + 0x18c79ec));
    func_0x01438628(*(undefined4 *)(_UNK_018c7d1c + 0x18c79f8));
    func_0x01438628(*(undefined4 *)(_UNK_018c7d20 + 0x18c7a04));
    func_0x01438628(*(undefined4 *)(_UNK_018c7d24 + 0x18c7a10));
    func_0x01438628(*(undefined4 *)(_UNK_018c7d28 + 0x18c7a1c));
    func_0x01438628(*(undefined4 *)(_UNK_018c7d2c + 0x18c7a28));
    func_0x01438628(*(undefined4 *)(_UNK_018c7d30 + 0x18c7a34));
    func_0x01438628(*(undefined4 *)(_UNK_018c7d34 + 0x18c7a40));
    func_0x01438628(*(undefined4 *)(_UNK_018c7d38 + 0x18c7a4c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1441,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1441,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar7,uVar4,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar5 = *(int **)(_UNK_018c7d3c + 0x18c7aa0);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_018bd08c();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_018c5390(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_018bd08c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_018bd3dc(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_018c7d40 + 0x18c7b20) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_018bd08c();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_018c3704(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ef320(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_018c7d44 + 0x18c7ba8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018c7d48 + 0x18c7bc4));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_018c7d4c + 0x18c7be4));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f05a8(iVar1,0x31,**(undefined4 **)(_UNK_018c7d50 + 0x18c7c1c));
        if (*(int *)(**(int **)(_UNK_018c7d54 + 0x18c7c30) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018c7d58 + 0x18c7c4c));
        piVar5 = (int *)FUN_018bd08c();
        if (piVar5 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar5 + 0x198))(piVar5,*(undefined4 *)(*piVar5 + 0x19c));
        iVar6 = **(int **)(_UNK_018c7d5c + 0x18c7c8c);
        iVar7 = *(int *)(iVar6 + 0x1c);
        if (iVar7 == 0) {
          func_0x014909d8(iVar6);
          iVar7 = *(int *)(iVar6 + 0x1c);
        }
        iVar7 = *(int *)(iVar7 + 8);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = func_0x0149097c();
        }
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = func_0x0149097c();
        }
        uVar4 = **(undefined4 **)(iVar7 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar1,uVar3,uVar4,0);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

