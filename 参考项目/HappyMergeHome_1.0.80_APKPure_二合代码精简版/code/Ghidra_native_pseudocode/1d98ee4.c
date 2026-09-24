
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01da8ee4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  pcVar6 = (char *)(_UNK_01da9330 + 0x1da8f0c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da9334 + 0x1da8f24));
    func_0x01438628(*(undefined4 *)(_UNK_01da9338 + 0x1da8f30));
    func_0x01438628(*(undefined4 *)(_UNK_01da933c + 0x1da8f3c));
    func_0x01438628(*(undefined4 *)(_UNK_01da9340 + 0x1da8f48));
    func_0x01438628(*(undefined4 *)(_UNK_01da9344 + 0x1da8f54));
    func_0x01438628(*(undefined4 *)(_UNK_01da9348 + 0x1da8f60));
    func_0x01438628(*(undefined4 *)(_UNK_01da934c + 0x1da8f6c));
    func_0x01438628(*(undefined4 *)(_UNK_01da9350 + 0x1da8f78));
    func_0x01438628(*(undefined4 *)(_UNK_01da9354 + 0x1da8f84));
    func_0x01438628(*(undefined4 *)(_UNK_01da9358 + 0x1da8f90));
    func_0x01438628(*(undefined4 *)(_UNK_01da935c + 0x1da8f9c));
    func_0x01438628(*(undefined4 *)(_UNK_01da9360 + 0x1da8fa8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3efe,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01da9364 + 0x1da902c));
    func_0x01ed69e0(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_01da9368 + 0x1da9064) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x01da9394();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_01da936c + 0x1da90b4),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_01da9370 + 0x1da90d8));
    if (*(int *)(**(int **)(_UNK_01da9374 + 0x1da90f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01da9378 + 0x1da910c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_01da937c + 0x1da913c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01da9380 + 0x1da9158));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x029a6fa8(iVar4,param_1,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar4 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x024f0e8c(iVar3,uVar8,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024ef348(iVar2,uVar8,0);
    if (param_4 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_50,param_4,0);
    uStack_38 = uStack_48;
    uStack_40 = uStack_50;
    *(undefined4 *)(iVar1 + 0x10) = uStack_48;
    *(undefined8 *)(iVar1 + 8) = uStack_50;
    iVar2 = func_0x01da9394();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_01da9384 + 0x1da9234) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01da9388 + 0x1da9250));
    uVar8 = func_0x01da9394();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    uVar9 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01da938c + 0x1da9278));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_01da9390 + 0x1da9298),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar8,param_2,param_3,0,uVar7,uVar10,uVar9,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x01da9394();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3efe,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

