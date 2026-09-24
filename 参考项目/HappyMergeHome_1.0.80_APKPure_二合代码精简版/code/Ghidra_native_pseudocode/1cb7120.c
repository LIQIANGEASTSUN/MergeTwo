
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc7120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_01cc7294 + 0x1cc7140);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc7298 + 0x1cc7158));
    func_0x01438628(*(undefined4 *)(_UNK_01cc729c + 0x1cc7164));
    *pcVar2 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_4c = CONCAT44(uStack_38,uStack_3c);
  uStack_40 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_3c;
  uStack_2c = uStack_38;
  uStack_28 = uStack_44;
  iVar1 = func_0x02953fd4(0x313a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01cc72a0 + 0x1cc71fc) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x024f1178(&uStack_60,0);
    uVar3 = (uint)&uStack_50 | 4;
    uStack_44 = uStack_58;
    uStack_4c = uStack_60;
    func_0x014385cc(uVar3,0);
    uStack_3c = param_1;
    func_0x014385cc(&uStack_3c,param_1);
    uStack_28 = param_7;
    uStack_30 = param_5;
    uStack_2c = param_6;
    uStack_50 = 0xffffffff;
    uStack_40 = param_2;
    uStack_38 = param_3;
    uStack_34 = param_4;
    func_0x03566cb4(uVar3,&uStack_50,**(undefined4 **)(_UNK_01cc72a4 + 0x1cc7270));
    func_0x01523e4c(uVar3,0);
  }
  else {
    iVar1 = func_0x029540a4(0x313a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028cbe38(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

