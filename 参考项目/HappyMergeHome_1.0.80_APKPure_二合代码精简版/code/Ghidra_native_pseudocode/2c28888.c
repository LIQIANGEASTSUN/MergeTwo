
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c38888(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  int iVar5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined8 uVar6;
  
  pcVar4 = (char *)(_UNK_02c38980 + 0x2c3889c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c38984 + 0x2c388b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c38988 + 0x2c388bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c3898c + 0x2c388c8));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 0xc);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  FUN_02c1cd2c(iVar5,0);
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c38990 + 0x2c38918));
    func_0x033341c0(iVar5,param_1,**(undefined4 **)(_UNK_02c38994 + 0x2c38934),0);
    *(int *)(param_1 + 0x18) = iVar5;
    func_0x014385cc((int *)(param_1 + 0x18),iVar5);
  }
  if (*(int *)(**(int **)(_UNK_02c38998 + 0x2c38958) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar4 = (char *)(_UNK_02af1c3c + 0x2af1b30);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02af1c40 + 0x2af1b44),iVar5,1,0);
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
    *(int *)(iVar1 + 8) = iVar5;
    func_0x014385cc((int *)(iVar1 + 8),iVar5);
    uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02af1c50 + 0x2af1bfc));
    func_0x033341c0(uVar2,iVar1,**(undefined4 **)(_UNK_02af1c54 + 0x2af1c18),0);
    pcVar4 = (char *)(_UNK_033397d0 + 0x33396f8);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_033397d4 + 0x333970c),uVar2,1,0,unaff_r4,unaff_r5,
                      unaff_r6,unaff_r7);
      func_0x01438628(*(undefined4 *)(_UNK_033397d8 + 0x3339718));
      func_0x01438628(*(undefined4 *)(_UNK_033397dc + 0x3339724));
      func_0x01438628(*(undefined4 *)(_UNK_033397e0 + 0x3339730));
      *pcVar4 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_033397e4 + 0x3339744) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x0333764c();
    uVar3 = (uint)((ulonglong)uVar6 >> 0x20);
    iVar5 = (int)uVar6;
    if (iVar5 != 0) {
      uVar3 = (uint)*(byte *)(iVar5 + 0x90);
    }
    if ((iVar5 != 0 && uVar3 != 0) && (*(char *)(iVar5 + 0xa0) == '\0')) {
      *(float *)(iVar5 + 200) = *(float *)(iVar5 + 0x60);
      *(float *)(iVar5 + 0x60) = *(float *)(iVar5 + 0x60) + 0.5;
    }
    uVar2 = func_0x03734fd0(iVar5,uVar2,**(undefined4 **)(_UNK_033397e8 + 0x3339774));
    iVar5 = func_0x03735e5c(uVar2,0,1,**(undefined4 **)(_UNK_033397ec + 0x333978c));
    uVar3 = **(uint **)(_UNK_033397f0 + 0x33397a0);
    if (iVar5 != 0) {
      uVar3 = (uint)*(byte *)(iVar5 + 0x90);
    }
    if (iVar5 != 0 && uVar3 != 0) {
      if (*(char *)(iVar5 + 0xa0) == '\0') {
        *(undefined1 *)(iVar5 + 0x5c) = 1;
      }
      return;
    }
    return;
  }
  iVar1 = func_0x029540a4(0x9f1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02889978(iVar1,0x3f000000,iVar5,1,0);
  return;
}

