
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017d41e4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined8 uVar8;
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
  
  pcVar4 = (char *)(_UNK_017d4480 + 0x17d41f8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d4484 + 0x17d420c));
    func_0x01438628(*(undefined4 *)(_UNK_017d4488 + 0x17d4218));
    func_0x01438628(*(undefined4 *)(_UNK_017d448c + 0x17d4224));
    func_0x01438628(*(undefined4 *)(_UNK_017d4490 + 0x17d4230));
    func_0x01438628(*(undefined4 *)(_UNK_017d4494 + 0x17d423c));
    func_0x01438628(*(undefined4 *)(_UNK_017d4498 + 0x17d4248));
    func_0x01438628(*(undefined4 *)(_UNK_017d449c + 0x17d4254));
    func_0x01438628(*(undefined4 *)(_UNK_017d44a0 + 0x17d4260));
    func_0x01438628(*(undefined4 *)(_UNK_017d44a4 + 0x17d426c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5db6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5db6,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x4a) == '\0') {
    piVar6 = *(int **)(_UNK_017d44a8 + 0x17d42d0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar7 = FUN_017d3d58();
    if (*(int *)(**(int **)(_UNK_017d44ac + 0x17d42f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar7,0,0);
    if (iVar1 != 0) {
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_017d3d58();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x017ef92c(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x017d4be8(iVar1);
      if (iVar1 == 0) {
        return;
      }
      piVar6 = *(int **)(_UNK_017d44b0 + 0x17d4380);
      *(undefined1 *)(param_1 + 0x4a) = 1;
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017d44b4 + 0x17d43a0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0202998c(iVar1,0x755,0,0);
      if (*(int *)(**(int **)(_UNK_017d44b8 + 0x17d43d4) + 0x74) == 0) {
        func_0x014387a4();
      }
      piVar6 = (int *)func_0x014e9518(**(undefined4 **)(_UNK_017d44bc + 0x17d43f0));
      if (piVar6 == (int *)0x0) {
        func_0x014388e4();
      }
      (**(code **)(*piVar6 + 0x228))(piVar6,*(undefined4 *)(*piVar6 + 0x22c));
      uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_017d44c0 + 0x17d4424));
      func_0x033341c0(uVar7,param_1,**(undefined4 **)(_UNK_017d44c4 + 0x17d4440),0);
      if (*(int *)(**(int **)(_UNK_017d44c8 + 0x17d4454) + 0x74) == 0) {
        func_0x014387a4();
      }
      pcVar4 = (char *)(_UNK_02af1c3c + 0x2af1b30);
      if (*pcVar4 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02af1c40 + 0x2af1b44),uVar7,1,0);
        func_0x01438628(*(undefined4 *)(_UNK_02af1c44 + 0x2af1b50));
        func_0x01438628(*(undefined4 *)(_UNK_02af1c48 + 0x2af1b5c));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x02953fd4(0x9f1,0);
      if (iVar1 == 0) {
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02af1c4c + 0x2af1bc4));
        func_0x024eeca8(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        *(undefined4 *)(iVar1 + 8) = uVar7;
        func_0x014385cc((undefined4 *)(iVar1 + 8),uVar7);
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02af1c50 + 0x2af1bfc));
        func_0x033341c0(uVar7,iVar1,**(undefined4 **)(_UNK_02af1c54 + 0x2af1c18),0);
        pcVar4 = (char *)(_UNK_033397d0 + 0x33396f8);
        if (*pcVar4 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_033397d4 + 0x333970c),uVar7,1,0);
          func_0x01438628(*(undefined4 *)(_UNK_033397d8 + 0x3339718));
          func_0x01438628(*(undefined4 *)(_UNK_033397dc + 0x3339724));
          func_0x01438628(*(undefined4 *)(_UNK_033397e0 + 0x3339730));
          *pcVar4 = '\x01';
        }
        if (*(int *)(**(int **)(_UNK_033397e4 + 0x3339744) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar8 = func_0x0333764c();
        uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
        iVar1 = (int)uVar8;
        if (iVar1 != 0) {
          uVar2 = (uint)*(byte *)(iVar1 + 0x90);
        }
        if ((iVar1 != 0 && uVar2 != 0) && (*(char *)(iVar1 + 0xa0) == '\0')) {
          *(float *)(iVar1 + 200) = *(float *)(iVar1 + 0x60);
          *(float *)(iVar1 + 0x60) = *(float *)(iVar1 + 0x60) + 0.5;
        }
        uVar7 = func_0x03734fd0(iVar1,uVar7,**(undefined4 **)(_UNK_033397e8 + 0x3339774));
        iVar1 = func_0x03735e5c(uVar7,0,1,**(undefined4 **)(_UNK_033397ec + 0x333978c));
        uVar2 = **(uint **)(_UNK_033397f0 + 0x33397a0);
        if (iVar1 != 0) {
          uVar2 = (uint)*(byte *)(iVar1 + 0x90);
        }
        if (iVar1 != 0 && uVar2 != 0) {
          if (*(char *)(iVar1 + 0xa0) == '\0') {
            *(undefined1 *)(iVar1 + 0x5c) = 1;
          }
          return;
        }
        return;
      }
      iVar1 = func_0x029540a4(0x9f1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_20 = 0;
      func_0x02889978(iVar1,0x3f000000,uVar7,1);
      return;
    }
  }
  return;
}

