
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01af2e00(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_01af2fec + 0x1af2e20);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af2ff0 + 0x1af2e34));
    func_0x01438628(*(undefined4 *)(_UNK_01af2ff4 + 0x1af2e40));
    func_0x01438628(*(undefined4 *)(_UNK_01af2ff8 + 0x1af2e4c));
    func_0x01438628(*(undefined4 *)(_UNK_01af2ffc + 0x1af2e58));
    func_0x01438628(*(undefined4 *)(_UNK_01af3000 + 0x1af2e64));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa4f4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01af3004 + 0x1af2ed4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01af3008 + 0x1af2ef0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x20);
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar7 = 0;
      puVar8 = *(undefined4 **)(_UNK_01af300c + 0x1af2f2c);
      do {
        iVar2 = func_0x0152983c(iVar1,iVar7,*puVar8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 8) == param_3) {
          iVar2 = func_0x0152983c(iVar1,iVar7,*puVar8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar3 = *(undefined4 *)(iVar2 + 0x18);
          iVar1 = func_0x0152983c(iVar1,iVar7,*puVar8);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          puVar8 = *(undefined4 **)(_UNK_01af3010 + 0x1af2fe8);
          uVar4 = *(undefined4 *)(iVar1 + 0x1c);
          goto LAB_01af2f74;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar1 + 0xc));
    }
    uVar3 = 0;
    uVar4 = 0;
    puVar8 = *(undefined4 **)(_UNK_01af3014 + 0x1af2f78);
LAB_01af2f74:
    uVar5 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,uVar3,uVar4,uVar5);
  }
  else {
    iVar1 = func_0x029540a4(0xa4f4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

