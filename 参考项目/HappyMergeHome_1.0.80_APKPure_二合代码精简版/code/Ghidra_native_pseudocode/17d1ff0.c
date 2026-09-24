
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017e1ff0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_017e2144 + 0x17e2008);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017e2148 + 0x17e201c));
    func_0x01438628(*(undefined4 *)(_UNK_017e214c + 0x17e2028));
    func_0x01438628(*(undefined4 *)(_UNK_017e2150 + 0x17e2034));
    func_0x01438628(*(undefined4 *)(_UNK_017e2154 + 0x17e2040));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8fcf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8fcf,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_02869558 + 0x2869478);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0286955c + 0x286948c),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02869560 + 0x2869548));
    return uVar5;
  }
  iVar1 = FUN_017d5bc8(param_1,0);
  if ((iVar1 == 0) || (iVar1 = FUN_017e19b8(param_1), iVar1 == 0)) {
    uVar5 = **(undefined4 **)(_UNK_017e2158 + 0x17e213c);
  }
  else {
    iVar4 = FUN_017d48ec(param_1);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uStack_18 = *(undefined4 *)(iVar4 + 0x70);
    uStack_14 = *(undefined4 *)(iVar4 + 0x74);
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    uVar5 = func_0x014387ac(**(undefined4 **)(_UNK_017e215c + 0x17e20e8),&uStack_18);
    uStack_1c = uVar2;
    uVar2 = func_0x014387ac(**(undefined4 **)(_UNK_017e2160 + 0x17e2108),&uStack_1c);
    uVar5 = func_0x014e95b8(**(undefined4 **)(_UNK_017e2164 + 0x17e2128),uVar5,uVar2,0);
  }
  return uVar5;
}

