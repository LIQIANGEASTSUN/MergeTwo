
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017d48ec(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_017d4bac + 0x17d4904);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d4bb0 + 0x17d4918));
    func_0x01438628(*(undefined4 *)(_UNK_017d4bb4 + 0x17d4924));
    func_0x01438628(*(undefined4 *)(_UNK_017d4bb8 + 0x17d4930));
    func_0x01438628(*(undefined4 *)(_UNK_017d4bbc + 0x17d493c));
    func_0x01438628(*(undefined4 *)(_UNK_017d4bc0 + 0x17d4948));
    func_0x01438628(*(undefined4 *)(_UNK_017d4bc4 + 0x17d4954));
    func_0x01438628(*(undefined4 *)(_UNK_017d4bc8 + 0x17d4960));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x414,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x414,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_02876f28 + 0x2876e48);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02876f2c + 0x2876e5c),param_1,0);
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4,0,0);
    uVar7 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02876f30 + 0x2876f18));
    return uVar7;
  }
  if (*(int *)(**(int **)(_UNK_017d4bcc + 0x17d49bc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017d4bd0 + 0x17d49d8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_017d4bd4 + 0x17d49f8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x20c);
  uVar7 = func_0x029f05a0(param_1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x024eede4(iVar1,uVar7,**(undefined4 **)(_UNK_017d4bd8 + 0x17d4a40));
  if (iVar6 == 0) {
    func_0x017d5340(param_1);
    iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_017d4bdc + 0x17d4a64));
    func_0x026edc3c(iVar6,0);
    iVar2 = func_0x017d5398(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x026ed7b8(iVar6,uVar7,0);
    uVar9 = func_0x029f3fe4(param_1,0);
    if ((int)uVar9 != 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      if (iVar6 == 0) {
        func_0x014388e4();
        uStack_28 = 0;
        func_0x026ecffc(0,extraout_r1_00,uVar7,uVar4);
        uVar8 = *(undefined4 *)(param_1 + 0x20);
        uVar4 = *(undefined4 *)(param_1 + 0x24);
        func_0x014388e4();
        uVar7 = extraout_r1_01;
      }
      else {
        uStack_28 = 0;
        func_0x026ecffc(iVar6,(int)((ulonglong)uVar9 >> 0x20),uVar7,uVar4);
        uVar8 = *(undefined4 *)(param_1 + 0x20);
        uVar4 = *(undefined4 *)(param_1 + 0x24);
        uVar7 = extraout_r1;
      }
      uStack_28 = 0;
      func_0x026ed0cc(iVar6,uVar7,uVar8,uVar4);
    }
    uVar7 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f0ea4(iVar1,uVar7,iVar6,**(undefined4 **)(_UNK_017d4be0 + 0x17d4b68));
  }
  uVar7 = func_0x029f05a0(param_1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar6 = **(int **)(_UNK_017d4be4 + 0x17d4b9c);
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  uVar3 = func_0x04754248(iVar1,uVar7,
                          *(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) +
                                                      0x34) + 0x10) + 0x60) + 0x84));
  if ((int)uVar3 < 0) {
    uVar4 = 0;
    func_0x05187a50(uVar7,0);
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x034a8a64();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar3) {
      func_0x034a8c14();
    }
    uVar4 = *(undefined4 *)(iVar1 + uVar3 * 0x10 + 0x1c);
  }
  return uVar4;
}

