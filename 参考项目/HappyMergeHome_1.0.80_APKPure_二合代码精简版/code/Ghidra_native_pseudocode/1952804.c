
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01962804(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
  
  pcVar6 = (char *)(_UNK_01962cd8 + 0x196282c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01962cdc + 0x1962844));
    func_0x01438628(*(undefined4 *)(_UNK_01962ce0 + 0x1962850));
    func_0x01438628(*(undefined4 *)(_UNK_01962ce4 + 0x196285c));
    func_0x01438628(*(undefined4 *)(_UNK_01962ce8 + 0x1962868));
    func_0x01438628(*(undefined4 *)(_UNK_01962cec + 0x1962874));
    func_0x01438628(*(undefined4 *)(_UNK_01962cf0 + 0x1962880));
    func_0x01438628(*(undefined4 *)(_UNK_01962cf4 + 0x196288c));
    func_0x01438628(*(undefined4 *)(_UNK_01962cf8 + 0x1962898));
    func_0x01438628(*(undefined4 *)(_UNK_01962cfc + 0x19628a4));
    func_0x01438628(*(undefined4 *)(_UNK_01962d00 + 0x19628b0));
    func_0x01438628(*(undefined4 *)(_UNK_01962d04 + 0x19628bc));
    func_0x01438628(*(undefined4 *)(_UNK_01962d08 + 0x19628c8));
    func_0x01438628(*(undefined4 *)(_UNK_01962d0c + 0x19628d4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3bd5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01962d10 + 0x1962958));
    func_0x01971848(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_01962d14 + 0x1962990) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x01962d44();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_01962d18 + 0x19629e0),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_01962d1c + 0x1962a04));
    if (*(int *)(**(int **)(_UNK_01962d20 + 0x1962a1c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01962d24 + 0x1962a38));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_01962d28 + 0x1962a6c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01962d2c + 0x1962a88));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x029a6fa8(iVar4,param_1,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(undefined4 *)(iVar4 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x024f0e8c(iVar3,uVar9,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024ef348(iVar2,uVar9,0);
    if (param_4 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_50,param_4,0);
    uStack_38 = uStack_48;
    uStack_40 = uStack_50;
    *(undefined4 *)(iVar1 + 0x10) = uStack_48;
    *(undefined8 *)(iVar1 + 8) = uStack_50;
    iVar2 = func_0x01962d44();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_01962d30 + 0x1962b70),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x01962d44();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_01962d34 + 0x1962be4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01962d38 + 0x1962c00));
    uVar9 = func_0x01962d44();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01962d3c + 0x1962c24));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_01962d40 + 0x1962c44),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x01962d44();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3bd5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

