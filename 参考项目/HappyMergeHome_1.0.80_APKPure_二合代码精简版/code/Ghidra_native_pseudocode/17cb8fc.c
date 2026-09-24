
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017db8fc(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_017dbae4 + 0x17db91c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017dbae8 + 0x17db930));
    func_0x01438628(*(undefined4 *)(_UNK_017dbaec + 0x17db93c));
    func_0x01438628(*(undefined4 *)(_UNK_017dbaf0 + 0x17db948));
    func_0x01438628(*(undefined4 *)(_UNK_017dbaf4 + 0x17db954));
    func_0x01438628(*(undefined4 *)(_UNK_017dbaf8 + 0x17db960));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8fb4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017dbafc + 0x17db9d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017dbb00 + 0x17db9ec));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_017dbb04 + 0x17dba14);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_017dbb0c + 0x17dba70);
        goto LAB_017dbac4;
      }
      iVar2 = func_0x0152983c(iVar1,iVar7,*puVar8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 8) == param_3) break;
      iVar7 = iVar7 + 1;
    }
    iVar2 = func_0x0152983c(iVar1,iVar7,*puVar8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar2 + 0x18);
    iVar1 = func_0x0152983c(iVar1,iVar7,*puVar8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar8 = *(undefined4 **)(_UNK_017dbb08 + 0x17dbac4);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_017dbac4:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x8fb4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

