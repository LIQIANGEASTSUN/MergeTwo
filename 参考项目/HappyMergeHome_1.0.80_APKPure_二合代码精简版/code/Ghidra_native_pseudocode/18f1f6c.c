
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01901f6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01902264 + 0x1901f8c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01902268 + 0x1901fa4));
    func_0x01438628(*(undefined4 *)(_UNK_0190226c + 0x1901fb0));
    func_0x01438628(*(undefined4 *)(_UNK_01902270 + 0x1901fbc));
    func_0x01438628(*(undefined4 *)(_UNK_01902274 + 0x1901fc8));
    func_0x01438628(*(undefined4 *)(_UNK_01902278 + 0x1901fd4));
    func_0x01438628(*(undefined4 *)(_UNK_0190227c + 0x1901fe0));
    func_0x01438628(*(undefined4 *)(_UNK_01902280 + 0x1901fec));
    func_0x01438628(*(undefined4 *)(_UNK_01902284 + 0x1901ff8));
    func_0x01438628(*(undefined4 *)(_UNK_01902288 + 0x1902004));
    func_0x01438628(*(undefined4 *)(_UNK_0190228c + 0x1902010));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5def,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01902290 + 0x1902084));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0xc) = param_6;
    *(undefined4 *)(iVar1 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar1 + 0xc),param_6);
    if (*(int *)(**(int **)(_UNK_01902294 + 0x19020c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01902298 + 0x19020dc));
    piVar5 = *(int **)(_UNK_0190229c + 0x19020f0);
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar5;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x6e4);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0374c388(iVar2,uVar6,**(undefined4 **)(_UNK_019022a0 + 0x1902128));
    if (*(int *)(**(int **)(_UNK_019022a4 + 0x1902140) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x024eec50(iVar2,0,0);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x01914f90(iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x024ef228(&uStack_30,iVar2,0);
      if (*(int *)(**(int **)(_UNK_019022a8 + 0x19021b0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_019022ac + 0x19021d8));
      uVar7 = *(undefined4 *)(iVar1 + 8);
      uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_019022b0 + 0x19021f0));
      func_0x0152e3ec(uVar6,iVar1,**(undefined4 **)(_UNK_019022b4 + 0x190220c),0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02b7f0c0(iVar2,uVar7,param_3,param_4,param_5,uStack_30,uStack_2c,uStack_28,0x3f333333,
                      uVar6,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5def,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0287e67c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}

