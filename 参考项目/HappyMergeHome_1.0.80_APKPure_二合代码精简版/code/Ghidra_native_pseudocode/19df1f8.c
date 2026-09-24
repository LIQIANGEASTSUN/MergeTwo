
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019ef1f8(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_019ef47c + 0x19ef214);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019ef480 + 0x19ef228));
    func_0x01438628(*(undefined4 *)(_UNK_019ef484 + 0x19ef234));
    func_0x01438628(*(undefined4 *)(_UNK_019ef488 + 0x19ef240));
    func_0x01438628(*(undefined4 *)(_UNK_019ef48c + 0x19ef24c));
    func_0x01438628(*(undefined4 *)(_UNK_019ef490 + 0x19ef258));
    func_0x01438628(*(undefined4 *)(_UNK_019ef494 + 0x19ef264));
    func_0x01438628(*(undefined4 *)(_UNK_019ef498 + 0x19ef270));
    func_0x01438628(*(undefined4 *)(_UNK_019ef49c + 0x19ef27c));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x3732,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x3732,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar3,0,0);
    uVar8 = func_0x024f56e0(&uStack_38,0,0);
    return uVar8;
  }
  if (*(int *)(**(int **)(_UNK_019ef4a0 + 0x19ef2dc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_019ef4a4 + 0x19ef2f8));
  iVar2 = iVar6;
  if (iVar6 == 0) {
    iVar2 = func_0x014388e4();
  }
  iVar6 = *(int *)(iVar6 + 0x18);
  if (iVar6 != 0) {
    iVar2 = *(int *)(iVar6 + 0xc);
  }
  if (iVar6 != 0 && iVar2 != 0) {
    piVar7 = *(int **)(_UNK_019ef4a8 + 0x19ef33c);
    iVar2 = *piVar7;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar7;
    }
    iVar5 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
    if (iVar5 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar7;
      }
      uVar8 = **(undefined4 **)(iVar2 + 0x5c);
      iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_019ef4ac + 0x19ef384));
      func_0x024f1190(iVar5,uVar8,**(undefined4 **)(_UNK_019ef4b0 + 0x19ef3a4),0);
      piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
      *piVar7 = iVar5;
      func_0x014385cc(piVar7,iVar5);
    }
    func_0x024f11a0(iVar6,iVar5,**(undefined4 **)(_UNK_019ef4b4 + 0x19ef3d0));
    if (0 < *(int *)(iVar6 + 0xc)) {
      puVar9 = *(undefined4 **)(_UNK_019ef4b8 + 0x19ef3f4);
      iVar2 = 1;
      do {
        iVar5 = func_0x0152983c(iVar6,iVar2 + -1,*puVar9);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar5 + 8) == param_2) {
          if (*(int *)(iVar6 + 0xc) + -1 <= iVar2 + -1) {
            return 0;
          }
          iVar2 = func_0x0152983c(iVar6,iVar2,*puVar9);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          FUN_019eeb98(param_1,*(undefined4 *)(iVar2 + 8));
          return 1;
        }
        bVar1 = iVar2 < *(int *)(iVar6 + 0xc);
        iVar2 = iVar2 + 1;
      } while (bVar1);
    }
  }
  return 0;
}

