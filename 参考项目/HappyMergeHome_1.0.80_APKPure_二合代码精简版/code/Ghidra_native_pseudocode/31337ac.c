
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031437ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_03143898 + 0x31437cc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0314389c + 0x31437ec));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x79d3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x79d3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_34 = param_5;
    uStack_30 = param_6;
    uStack_2c = 0;
    uStack_38 = param_4;
    func_0x028bc180(iVar1,param_1,param_2,param_3);
    return;
  }
  if (*(int *)(**(int **)(_UNK_031438a0 + 0x314385c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_0313e53c();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar4 = (char *)(_UNK_031439b8 + 0x31438c4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031439bc + 0x31438d8));
    *pcVar4 = '\x01';
  }
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  iStack_34 = iStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iStack_28 = iStack_44;
  iVar2 = func_0x02953fd4(0x79d4,0);
  if (iVar2 == 0) {
    func_0x0505644c(&uStack_58,0);
    puVar3 = (undefined4 *)((uint)&uStack_48 | 4);
    *puVar3 = uStack_58;
    puVar3[1] = uStack_54;
    puVar3[2] = uStack_50;
    puVar3[3] = uStack_4c;
    func_0x014385cc(puVar3,0);
    iStack_34 = iVar1;
    func_0x014385cc(&iStack_34,iVar1);
    uStack_2c = param_6;
    uStack_48 = 0xffffffff;
    uStack_30 = param_4;
    func_0x035ca3e8(puVar3,&uStack_48,**(undefined4 **)(_UNK_031439c0 + 0x31439a0));
  }
  else {
    iVar2 = func_0x029540a4(0x79d4,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028d6898(iVar2,iVar1,param_4,param_6,0);
  }
  return;
}

