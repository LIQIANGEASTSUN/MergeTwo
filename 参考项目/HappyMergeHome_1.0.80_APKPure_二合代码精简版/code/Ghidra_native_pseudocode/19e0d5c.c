
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019f0d5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_019f1144 + 0x19f0d7c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019f1148 + 0x19f0d94));
    func_0x01438628(*(undefined4 *)(_UNK_019f114c + 0x19f0da0));
    func_0x01438628(*(undefined4 *)(_UNK_019f1150 + 0x19f0dac));
    func_0x01438628(*(undefined4 *)(_UNK_019f1154 + 0x19f0db8));
    func_0x01438628(*(undefined4 *)(_UNK_019f1158 + 0x19f0dc4));
    func_0x01438628(*(undefined4 *)(_UNK_019f115c + 0x19f0dd0));
    *pcVar6 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x3782,0);
  if (iVar1 == 0) {
    iVar1 = FUN_019ed90c(param_1);
    if ((iVar1 != 0) && (iVar1 = FUN_019ed69c(param_1), iVar1 == 0)) {
      fVar2 = (float)func_0x024f1544(0x3f800000,param_5);
      iVar1 = (int)fVar2;
      if (fVar2 == _UNK_019f1140) {
        iVar1 = -0x80000000;
      }
      iVar3 = FUN_019ed9e0(param_1);
      iVar4 = FUN_019edb58(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x026c1ea0(iVar4,*(int *)(iVar4 + 0x3c) + iVar1,0);
      if (*(int *)(**(int **)(_UNK_019f1160 + 0x19f0ec8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019f1164 + 0x19f0ee4));
      iVar7 = **(int **)(_UNK_019f1168 + 0x19f0ef8);
      iVar4 = *(int *)(iVar7 + 0x1c);
      if (iVar4 == 0) {
        func_0x014909d8(iVar7);
        iVar4 = *(int *)(iVar7 + 0x1c);
      }
      iVar4 = *(int *)(iVar4 + 8);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x0149097c();
      }
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x0149097c();
      }
      uVar8 = **(undefined4 **)(iVar4 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar1,**(undefined4 **)(_UNK_019f116c + 0x19f0f74),uVar8,0);
      iVar1 = FUN_019edb58(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x3c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar1) {
        iVar1 = FUN_019edb58(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026c1ea0(iVar1,*(int *)(iVar1 + 0x3c) - *(int *)(iVar3 + 0xc),0);
        iVar1 = **(int **)(**(int **)(_UNK_019f1170 + 0x19f0ff0) + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar8 = 0;
        func_0x02e64460(iVar1,0x388,1);
        iVar1 = FUN_019edb58(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iStack_28 = *(int *)(iVar1 + 0x38);
        func_0x026c1de4(iVar1,iStack_28 + 1,0);
        if (param_4 == 0) {
          func_0x014388e4();
        }
        func_0x02bebb14(&uStack_34,param_4,param_2,0);
        func_0x019f1178(param_1,1,uStack_34,uStack_30,uStack_2c);
        if (*(int *)(**(int **)(_UNK_019f1174 + 0x19f10c0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0202346c(0);
        iStack_28 = *(int *)(iVar3 + 8);
        uVar5 = func_0x01524ffc(&iStack_28,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar1,0x1f6,uVar5,0,0,0,0,uVar8,0,0,0,0,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x3782,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd544(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

