
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017dd120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  pcVar4 = (char *)(_UNK_017dd418 + 0x17dd140);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017dd41c + 0x17dd158));
    func_0x01438628(*(undefined4 *)(_UNK_017dd420 + 0x17dd164));
    func_0x01438628(*(undefined4 *)(_UNK_017dd424 + 0x17dd170));
    func_0x01438628(*(undefined4 *)(_UNK_017dd428 + 0x17dd17c));
    func_0x01438628(*(undefined4 *)(_UNK_017dd42c + 0x17dd188));
    func_0x01438628(*(undefined4 *)(_UNK_017dd430 + 0x17dd194));
    func_0x01438628(*(undefined4 *)(_UNK_017dd434 + 0x17dd1a0));
    func_0x01438628(*(undefined4 *)(_UNK_017dd438 + 0x17dd1ac));
    func_0x01438628(*(undefined4 *)(_UNK_017dd43c + 0x17dd1b8));
    func_0x01438628(*(undefined4 *)(_UNK_017dd440 + 0x17dd1c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d65,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017dd444 + 0x17dd238));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0xc) = param_6;
    *(undefined4 *)(iVar1 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar1 + 0xc),param_6);
    if (*(int *)(**(int **)(_UNK_017dd448 + 0x17dd274) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017dd44c + 0x17dd290));
    piVar5 = *(int **)(_UNK_017dd450 + 0x17dd2a4);
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar5;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x654);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0374c388(iVar2,uVar6,**(undefined4 **)(_UNK_017dd454 + 0x17dd2dc));
    if (*(int *)(**(int **)(_UNK_017dd458 + 0x17dd2f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x024eec50(iVar2,0,0);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x017efb5c(iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x024ef228(&uStack_30,iVar2,0);
      if (*(int *)(**(int **)(_UNK_017dd45c + 0x17dd364) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017dd460 + 0x17dd38c));
      uVar7 = *(undefined4 *)(iVar1 + 8);
      uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_017dd464 + 0x17dd3a4));
      func_0x0152e3ec(uVar6,iVar1,**(undefined4 **)(_UNK_017dd468 + 0x17dd3c0),0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02b7f0c0(iVar2,uVar7,param_3,param_4,param_5,uStack_30,uStack_2c,uStack_28,0x3f333333,
                      uVar6,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5d65,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0287e67c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}

