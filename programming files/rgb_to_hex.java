public class rgb_to_hex {
    public static void main(String[] args) {
        // sets r g b values
        int r = 255;
        int g = 127;
        int b = 0;
        String hexColor = rgbToHex(r, g, b); // calls rgbToHex function
        System.out.println("RGB color (" + r + ", " + g + ", " + b + ") = " + hexColor); // prints out the hex value
    }

    public static String rgbToHex(int r, int g, int b) {
        // ensures that the values are in the range of values
        r = Math.min(255, Math.max(0, r));
        g = Math.min(255, Math.max(0, g));
        b = Math.min(255, Math.max(0, b));
        return String.format("%02X%02X%02X", r, g, b); // returns the hex value
    }
}

//Test with RGB color (255, 127, 0) = FF7F00


