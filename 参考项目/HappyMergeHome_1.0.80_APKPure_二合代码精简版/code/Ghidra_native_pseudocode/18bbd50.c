
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018cbd50(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_018cc060 + 0x18cbd70);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018cc064 + 0x18cbd84));
    func_0x01438628(*(undefined4 *)(_UNK_018cc068 + 0x18cbd90));
    func_0x01438628(*(undefined4 *)(_UNK_018cc06c + 0x18cbd9c));
    func_0x01438628(*(undefined4 *)(_UNK_018cc070 + 0x18cbda8));
    func_0x01438628(*(undefined4 *)(_UNK_018cc074 + 0x18cbdb4));
    func_0x01438628(*(undefined4 *)(_UNK_018cc078 + 0x18cbdc0));
    func_0x01438628(*(undefined4 *)(_UNK_018cc07c + 0x18cbdcc));
    func_0x01438628(*(undefined4 *)(_UNK_018cc080 + 0x18cbdd8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x953f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018cc084 + 0x18cbe48) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_018bd08c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_018cbb98(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_018cc088 + 0x18cbe8c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018cc08c + 0x18cbea8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029b1058(iVar1,uVar2,0);
    iVar8 = 0;
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar8 = 0;
      if (0 < iVar5) {
        iVar8 = 0;
        iVar6 = 0;
        puVar10 = *(undefined4 **)(_UNK_018cc090 + 0x18cbf04);
        puVar9 = *(undefined4 **)(_UNK_018cc094 + 0x18cbf0c);
        do {
          if (*(int *)(**(int **)(_UNK_018cc098 + 0x18cbf14) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(*puVar10);
          iVar3 = func_0x0152983c(iVar1,iVar6,*puVar9);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar3 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02be153c(iVar5,uVar2,0);
          if (*(int *)(**(int **)(_UNK_018cc09c + 0x18cbf80) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(*puVar10);
          iVar4 = func_0x0152983c(iVar1,iVar6,*puVar9);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x02be1348(iVar5,uVar2,0);
          if (iVar5 == 0 && iVar3 == 1) {
            iVar5 = func_0x0152983c(iVar1,iVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x018cc0a4(param_2,*(undefined4 *)(iVar5 + 8));
            *(undefined1 *)(param_2 + 0x52) = 1;
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_018cc0a0 + 0x18cc044);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x953f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

