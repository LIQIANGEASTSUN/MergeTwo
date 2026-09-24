
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01685a1c(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar5 = (char *)(_UNK_01685c04 + 0x1685a3c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01685c08 + 0x1685a50));
    func_0x01438628(*(undefined4 *)(_UNK_01685c0c + 0x1685a5c));
    func_0x01438628(*(undefined4 *)(_UNK_01685c10 + 0x1685a68));
    func_0x01438628(*(undefined4 *)(_UNK_01685c14 + 0x1685a74));
    func_0x01438628(*(undefined4 *)(_UNK_01685c18 + 0x1685a80));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x87a6,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01685c1c + 0x1685af0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01685c20 + 0x1685b0c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_01685c24 + 0x1685b34);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_01685c2c + 0x1685b90);
        goto LAB_01685be4;
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
    puVar8 = *(undefined4 **)(_UNK_01685c28 + 0x1685be4);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_01685be4:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x87a6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

