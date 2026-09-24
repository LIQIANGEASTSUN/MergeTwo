
/* WARNING: Possible PIC construction at 0x01bc3290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01bc3294) */
/* WARNING: Removing unreachable block (ram,0x01bc3298) */
/* WARNING: Removing unreachable block (ram,0x01bc329c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01bc3044(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01bc3320 + 0x1bc305c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bc3324 + 0x1bc3070));
    func_0x01438628(*(undefined4 *)(_UNK_01bc3328 + 0x1bc307c));
    func_0x01438628(*(undefined4 *)(_UNK_01bc332c + 0x1bc3088));
    func_0x01438628(*(undefined4 *)(_UNK_01bc3330 + 0x1bc3094));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e46,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e46,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x024f56f0(&uStack_30,0,0);
    return uVar5;
  }
  piVar6 = *(int **)(_UNK_01bc3334 + 0x1bc30f0);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_01bc3338 + 0x1bc310c);
  iVar1 = func_0x014e9518(*puVar8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x020ab0ac(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x14) != 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x020ab0ac(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      puVar7 = *(undefined4 **)(_UNK_01bc333c + 0x1bc31b0);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x020ab0ac(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) < 1) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x020ab0ac(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = *puVar7;
      }
      else {
        iVar1 = FUN_01bc2f34(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x020ab0ac(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x14);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = *puVar7;
      }
      uVar5 = (*(code *)&SUB_04cd26d0)(iVar1,0,uVar5);
      return uVar5;
    }
  }
  return 100;
}

