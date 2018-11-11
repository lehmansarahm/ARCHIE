package edu.temple.gtc_annotator.wearable;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.util.AttributeSet;
import android.util.Log;
import android.util.TypedValue;
import android.view.View;

import edu.temple.gtc_annotator.R;

public class CircularRatingView extends View {

    private int height, width = 0;
    private int padding = 0;
    private int fontSize = 0;
    private int numeralSpacing = 0;
    private int radius = 0;
    private Paint paint;

    private boolean isInit;
    private int[] numbers = {1,2,3,4,5,6,7,8,9,10};
    private Rect rect = new Rect();

    private static final int BAD = 0, GOOD = 1;
    private int feedbackType;
    private int rating;

    public CircularRatingView(Context context) {
        super(context);
    }

    public CircularRatingView(Context context, AttributeSet attrs) {
        super(context, attrs);
        initFeedback(context, attrs);
    }

    public CircularRatingView(Context context, AttributeSet attrs, int defStyleAttr) {
        super(context, attrs, defStyleAttr);
        initFeedback(context, attrs);
    }

    private void initFeedback(Context context, AttributeSet attrs) {
        TypedArray a = context.getTheme().obtainStyledAttributes(attrs,
                R.styleable.CircularRatingView,0, 0);
        try {
            feedbackType = a.getInt(R.styleable.CircularRatingView_feedbackType, GOOD);
            rating = a.getInt(R.styleable.CircularRatingView_rating, 0);
        } finally {
            a.recycle();
        }
    }

    private void initClock() {
        height = getHeight();
        width = getWidth();
        padding = numeralSpacing + 50;
        fontSize = (int) TypedValue.applyDimension(TypedValue.COMPLEX_UNIT_SP, 13,
                getResources().getDisplayMetrics());

        int min = Math.min(height, width);
        radius = min / 2 - padding;
        paint = new Paint();
        isInit = true;
    }

    @Override
    protected void onDraw(Canvas canvas) {
        if (!isInit) initClock();

        prepCanvas();
        drawCenter(canvas);
        drawRating(canvas);
        drawNumerals(canvas);

        postInvalidateDelayed(500);
        invalidate();
    }

    private void prepCanvas() {
        paint.reset();
        paint.setColor(Color.WHITE);
        paint.setStrokeWidth(5);
        paint.setStyle(Paint.Style.STROKE);
        paint.setAntiAlias(true);
    }

    private void drawCenter(Canvas canvas) {
        paint.setStyle(Paint.Style.FILL);

        Bitmap b;
        if (feedbackType == GOOD) {
            b = BitmapFactory.decodeResource(getResources(),
                    R.drawable.baseline_thumb_up_white_45dp);
        } else {
            b = BitmapFactory.decodeResource(getResources(),
                    R.drawable.baseline_thumb_down_white_45dp);
        }

        int size = 45, radius = (size / 2);
        int centerX = (width / 2), centerY = (height / 2);
        canvas.drawBitmap(b, (centerX - radius - 5), (centerY - radius - 5), paint);
    }

    private void drawRating(Canvas canvas) {
        if (rating != 0) {
            for (double i = 1; i <= rating; i += 0.005) {
                double angle = Math.PI / (numbers.length / 2) * (i - 3);
                int x = (int) (width / 2 + Math.cos(angle) * radius - rect.width() / 2);
                int y = (int) (height / 2 + Math.sin(angle) * radius + rect.height() / 2);
                canvas.drawCircle(x + 10, y - 7, 20, paint);
            }
        }
    }

    private void drawNumerals(Canvas canvas) {
        paint.setTextSize(fontSize);
        paint.setColor(Color.BLACK);

        for (int number : numbers) {
            if (number > rating)
                paint.setColor(Color.WHITE);

            String tmp = String.valueOf(number);
            paint.getTextBounds(tmp, 0, tmp.length(), rect);
            double angle = Math.PI / (numbers.length / 2) * (number - 3);
            int x = (int) (width / 2 + Math.cos(angle) * radius - rect.width() / 2);
            int y = (int) (height / 2 + Math.sin(angle) * radius + rect.height() / 2);
            canvas.drawText(tmp, x, y, paint);
        }
    }

}