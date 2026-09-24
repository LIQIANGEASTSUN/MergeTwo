
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017acbfc(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar5 = (char *)(_UNK_017acde4 + 0x17acc1c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017acde8 + 0x17acc30));
    func_0x01438628(*(undefined4 *)(_UNK_017acdec + 0x17acc3c));
    func_0x01438628(*(undefined4 *)(_UNK_017acdf0 + 0x17acc48));
    func_0x01438628(*(undefined4 *)(_UNK_017acdf4 + 0x17acc54));
    func_0x01438628(*(undefined4 *)(_UNK_017acdf8 + 0x17acc60));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8e8d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017acdfc + 0x17accd0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017ace00 + 0x17accec));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_017ace04 + 0x17acd14);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_017ace0c + 0x17acd70);
        goto LAB_017acdc4;
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
    puVar8 = *(undefined4 **)(_UNK_017ace08 + 0x17acdc4);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_017acdc4:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x8e8d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

